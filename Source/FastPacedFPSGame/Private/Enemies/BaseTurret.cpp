// Fill out your copyright notice in the Description page of Project Settings.

#include "Enemies/BaseTurret.h"

#include "Kismet/KismetMathLibrary.h"
#include "Engine/DamageEvents.h"


// Sets default values
ABaseTurret::ABaseTurret()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseTurret::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector PlayerPosition = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	if (PlayerInAttackRadius(PlayerPosition))
	{
		TrackPlayer(PlayerPosition, DeltaTime);
	}

}

bool ABaseTurret::PlayerInAttackRadius(FVector PlayerPosition)
{
	float Distance = (PlayerPosition - GetActorLocation()).Size();

	FHitResult Hit;
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	QueryParams.AddIgnoredActor(GetWorld()->GetFirstPlayerController()->GetPawn());

	GetWorld()->LineTraceSingleByChannel(Hit, GetActorLocation(), PlayerPosition, ECC_Pawn, QueryParams);

	if (Distance < Radius && !Hit.bBlockingHit) 
	{
		return true;
	}

	return false;
}

void ABaseTurret::TrackPlayer(FVector PlayerPosition, float Alpha)
{
	FRotator TargetRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), PlayerPosition);
	FRotator InterpolatedRotation = FMath::RInterpTo(HeadRef->GetRelativeTransform().GetRotation().Rotator(), TargetRotation, Alpha, RotationSpeed);
	
	HeadRef->SetRelativeRotation(InterpolatedRotation);
}

void ABaseTurret::Damage(float Damage, AActor* OtherActor)
{
	TSubclassOf<UDamageType> DmgTypeClass = UDamageType::StaticClass(); //damage type maybe necessary later down the line
	OtherActor->TakeDamage(Damage, FDamageEvent(DmgTypeClass), nullptr, this->GetOwner());
}

