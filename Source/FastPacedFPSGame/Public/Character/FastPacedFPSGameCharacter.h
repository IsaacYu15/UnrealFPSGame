// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "FastPacedFPSGameCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);


UENUM(BlueprintType)
enum class State : uint8 {
	None = 0,
	Dashing = 1,
	Attacking = 2,
	Grappling = 3,
	WallRunning = 4,
	Blocking = 5,
};

UCLASS(config = Game)

class AFastPacedFPSGameCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* AttackAction;
	
public:
	AFastPacedFPSGameCharacter();

protected:
	virtual void BeginPlay();

public:
		
	//CLEAN: ORGANIZE VARIABLES
	virtual void Tick(float DeltaTime) override;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* GrappleAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* DashAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* BlockAction;

	/** Bool for AnimBP to switch to another animation set */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Weapon)
	bool bHasRifle;

	void Jump() override;

	UPROPERTY(BlueprintReadWrite, Category = "State")
	State MovementState;

	/*WALL RUNNING */
	UPROPERTY(EditAnywhere)
	float wallRunSpeed;

	UPROPERTY(BlueprintReadOnly, Category = "WallRunning")
	int leanDirection = 1;

	UPROPERTY()
	FVector wallJumpOffDir;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WallRunning")
	float wallJumpOffVelocity;
	
	UPROPERTY()
	FVector wallRunVelocity;

	/*GRAPPLING*/
	UPROPERTY()
	FVector grappleVelocity;

	UPROPERTY()
	AActor* GrappleActor = nullptr;

	UPROPERTY(EditAnywhere, Category = "Grappling")
	float grappleSpeed;

	/*ATTACKING*/
	UPROPERTY(EditAnywhere, Category = "Attacking")
	float AttackDamage = 50;

	/*TIMING*/

	UPROPERTY(EditAnywhere, Category = "CoolDowns")
	float attackCooldownTime = 3;

	UPROPERTY(EditAnywhere, Category = "CoolDowns")
	float DashCooldownTime = 1;

	UPROPERTY(EditAnywhere, Category = "CoolDowns")
	float BlockCooldownTime = 1.5;


	FTimerHandle CountdownTimerHandle;

	FTimerHandle BlockTimerHandle;
	
	/*DASHING*/
	UPROPERTY()
	FVector dashLocation;

	UPROPERTY()
	FVector dashVelocity;

	UPROPERTY(EditAnywhere, Category = "Dashing")
	float dashSpeed;

	UPROPERTY(EditAnywhere, Category = "Dashing")
	float dashDistance;

	UPROPERTY()
	bool CanDash = true;

	UPROPERTY(BlueprintReadOnly, Category = "Blocking")
	bool CanBlock = true;

	UPROPERTY(EditAnywhere, Category = "Blocking")
	float BlockingTime = 0.5;


protected:
	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	/** Called for grapple movement */
	void Grapple();

	/** Called for attacking */
	void Attack();

	/** Called for dash movement */
	void Dash();

	/** Called for block */
	void Block();

	void ResetBlocking();
	

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	/** Returns Mesh1P subobject **/
	UFUNCTION(BlueprintCallable)
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void MovementCoolDownManager();

	UFUNCTION(BlueprintCallable)
	void LaunchPlayer(float Amount, FVector Direction);

private: 

	UPROPERTY()
	FVector ImpactNormal = FVector::UpVector;
	
};

