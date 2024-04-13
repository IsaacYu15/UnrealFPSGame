// Copyright Epic Games, Inc. All Rights Reserved.

#include "FastPacedFPSGameCharacter.h"
#include "FastPacedFPSGameProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Engine/LocalPlayer.h"
#include "Math/Vector.h"
#include "Engine/DamageEvents.h"

#include "Engine/Engine.h"


DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AFastPacedFPSGameCharacter

AFastPacedFPSGameCharacter::AFastPacedFPSGameCharacter()
{	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
		
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	//Mesh1P->SetRelativeRotation(FRotator(0.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AFastPacedFPSGameCharacter::OnOverlapBegin);
	GetCapsuleComponent()->OnComponentEndOverlap.AddDynamic(this, &AFastPacedFPSGameCharacter::OnOverlapEnd);

}

void AFastPacedFPSGameCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	PrimaryActorTick.bCanEverTick = true;

}

void AFastPacedFPSGameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (MovementState == State::Dashing) 
	{
		GetCharacterMovement()->Velocity = dashVelocity * dashSpeed;

		if ((GetActorLocation() - dashLocation).Size() > dashDistance) {
			MovementState = State::None;
			GetCharacterMovement()->Velocity = FVector::ZeroVector;
			GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &AFastPacedFPSGameCharacter::MovementCoolDownManager, DashCooldownTime, false);
		}

	} 
	else if (MovementState == State::Grappling) 
	{
		GetCharacterMovement()->Velocity = grappleVelocity * grappleSpeed;

		if ((GetActorLocation() - GrappleActor->GetActorLocation()).Size() < 100) { 
			MovementState = State::None;
			GetCharacterMovement()->GravityScale = 1;
		}

	} else if (MovementState == State::WallRunning) 
	{
		GetCharacterMovement()->Velocity = wallRunVelocity * wallRunSpeed;
	}




}

//////////////////////////////////////////////////////////////////////////// Input

void AFastPacedFPSGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &AFastPacedFPSGameCharacter::Jump);

		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AFastPacedFPSGameCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AFastPacedFPSGameCharacter::Look);

		// Grapple
		EnhancedInputComponent->BindAction(GrappleAction, ETriggerEvent::Started, this, &AFastPacedFPSGameCharacter::Grapple);

		// Attack
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Started, this, &AFastPacedFPSGameCharacter::Attack);

		//Dash
		EnhancedInputComponent->BindAction(DashAction, ETriggerEvent::Started, this, &AFastPacedFPSGameCharacter::Dash);

		//Block
		EnhancedInputComponent->BindAction(BlockAction, ETriggerEvent::Started, this, &AFastPacedFPSGameCharacter::Block);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void AFastPacedFPSGameCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//CLEAN: SHOULD BE SMOOTHER WAY OF DOING THIS...
	leanDirection = 1;
	ImpactNormal = SweepResult.ImpactNormal;

	if (OtherActor->ActorHasTag("WallRunnable")) {
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, TEXT("Wall Run Start!"));

		MovementState = State::WallRunning;
		GetCharacterMovement()->GravityScale = 0;

		FVector runDir = FVector::CrossProduct(GetActorUpVector(), SweepResult.ImpactNormal);
		FVector dirOne = FVector(runDir.X, runDir.Y, 0);
		FVector dirTwo = -dirOne;

		float dot = FVector::DotProduct(dirOne, GetActorForwardVector());
		float dotTwo = FVector::DotProduct(dirTwo, GetActorForwardVector());

		if (FMath::Acos(dot) < FMath::Acos(dotTwo)) {
			wallRunVelocity = FVector(runDir.X, runDir.Y, 0);
		}
		else {
			wallRunVelocity = FVector(-runDir.X, -runDir.Y, 0);
		}
		

		wallJumpOffDir = SweepResult.ImpactNormal;

		if (FMath::Acos(FVector::DotProduct(GetActorRightVector(), wallJumpOffDir)) > FMath::Acos(FVector::DotProduct(-GetActorRightVector(), wallJumpOffDir))) {
			leanDirection = 0;
		}
		else {
			leanDirection = 2;
		}

	}

	//Reset other states
	if (MovementState == State::Grappling) {
		MovementState = State::None;
		GetCharacterMovement()->GravityScale = 1;
	}

	if (MovementState == State::Dashing) {
		MovementState = State::None;

		GetCharacterMovement()->Velocity = FVector::ZeroVector;
		GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &AFastPacedFPSGameCharacter::MovementCoolDownManager, DashCooldownTime, false);
	}
}

void AFastPacedFPSGameCharacter::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	leanDirection = 1;
	
	if (OtherActor->ActorHasTag("WallRunnable")) {
		MovementState = State::None;
		GetCharacterMovement()->GravityScale = 1.0;
	}
}

void AFastPacedFPSGameCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D

	FVector2D MovementVector = Value.Get<FVector2D>();


	if (Controller != nullptr && MovementState != State::WallRunning)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);

	}
}

void AFastPacedFPSGameCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AFastPacedFPSGameCharacter::Grapple()
{

	if (MovementState != State::Grappling) {

		FHitResult Hit;
		FVector TraceStart = GetActorLocation();
		FVector TraceEnd = GetActorLocation() + GetFirstPersonCameraComponent()->GetForwardVector() * 90000;

		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(this);

		GetWorld()->LineTraceSingleByChannel(Hit, TraceStart, TraceEnd, ECC_Pawn, QueryParams);

		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Black, FString::Printf(TEXT("Bool: %s"), Hit.bBlockingHit ? TEXT("true") : TEXT("false")));

		if (Hit.bBlockingHit && IsValid(Hit.GetActor()) && Hit.GetActor()->ActorHasTag("GrapplePoint"))
		{

			DrawDebugLine(GetWorld(), TraceStart, Hit.ImpactPoint, FColor::Red, false, 1.0f, 0, 10.0f);

			grappleVelocity = GetFirstPersonCameraComponent()->GetForwardVector().GetSafeNormal();
			GrappleActor = Hit.GetActor();

			MovementState = State::Grappling;
			GetCharacterMovement()->GravityScale = 0;

			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Blue, TEXT("GRAPPLE"));

			Super::LaunchCharacter(grappleVelocity, false, false);
		}

	}
	

}

void AFastPacedFPSGameCharacter::Attack()
{
	if (MovementState != State::Attacking) {

		FHitResult Hit;
		FVector TraceStart = GetActorLocation();
		FVector TraceEnd = GetActorLocation() + GetFirstPersonCameraComponent()->GetForwardVector() * 350;

		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(this);

		//LOOK INTO THESE PARAMETERS BROOO
		GetWorld()->LineTraceSingleByChannel(Hit, TraceStart, TraceEnd, ECC_Pawn, QueryParams);

		DrawDebugLine(GetWorld(), TraceStart, TraceEnd, FColor::Blue, false, 1.0f, 0, 10.0f);

		if (Hit.bBlockingHit && IsValid(Hit.GetActor()))
		{
			TSubclassOf<UDamageType> DmgTypeClass = UDamageType::StaticClass(); //damage type maybe necessary later down the line
			Hit.GetActor()->TakeDamage(AttackDamage, FDamageEvent(DmgTypeClass), nullptr, this->GetOwner());
		}

		MovementState = State::Attacking;

		GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &AFastPacedFPSGameCharacter::MovementCoolDownManager, attackCooldownTime, false);
	}

}

void AFastPacedFPSGameCharacter::Dash()
{
	if (CanDash) {
		dashVelocity = GetCharacterMovement()->GetLastInputVector().GetSafeNormal();

		if (dashVelocity == FVector::ZeroVector) {
			dashVelocity = GetFirstPersonCameraComponent()->GetForwardVector().GetSafeNormal();
		}

		dashLocation = GetActorLocation();

		MovementState = State::Dashing;
		CanDash = false;
	}

}

void AFastPacedFPSGameCharacter::Block()
{
	if (CanBlock && MovementState != State::Dashing && MovementState != State::Grappling)
	{
		CanBlock = false;
		MovementState = State::Blocking;

		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Blue, TEXT("YES"));

		GetWorldTimerManager().SetTimer(BlockTimerHandle, this, &AFastPacedFPSGameCharacter::ResetBlocking, BlockingTime, false);
	}
}

void AFastPacedFPSGameCharacter::ResetBlocking()
{
	MovementState = State::None;
	CanDash = true;

	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &AFastPacedFPSGameCharacter::MovementCoolDownManager, BlockCooldownTime, false);
}

void AFastPacedFPSGameCharacter::MovementCoolDownManager()
{
	GetWorldTimerManager().ClearTimer(CountdownTimerHandle);

	if (MovementState == State::Attacking) {
		MovementState = State::None;
	}else if (!CanDash) {
		CanDash =true;
	}else if (!CanBlock) {
		CanBlock = true;
	}
}

void AFastPacedFPSGameCharacter::LaunchPlayer(float Amount, FVector Direction)
{
	Super::LaunchCharacter(Direction * Amount, true, true);
	MovementState = State::None;
}

void AFastPacedFPSGameCharacter::Jump()
{
	Super::Jump();

	if (MovementState == State::WallRunning) {
		GetCharacterMovement()->Velocity = (GetCharacterMovement()->Velocity.GetSafeNormal(0.0f) + wallJumpOffDir) * wallJumpOffVelocity;
		GetCharacterMovement()->Velocity += FVector(0,0,1) * wallJumpOffVelocity / 2.5f;
	}
}

