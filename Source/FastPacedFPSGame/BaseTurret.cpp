// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/KismetMathLibrary.h"

#include "BaseTurret.h"

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

		/*
		if (!GetWorldTimerManager().IsTimerActive(ABaseTurret::FireTimeHandle))
		{
			GetWorldTimerManager().SetTimer(FireTimeHandle, this, &ABaseTurret::Fire, FireRate, false);
		}
		*/

	}

}

void ABaseTurret::Fire()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("FIRE"));
}

bool ABaseTurret::PlayerInAttackRadius(FVector PlayerPosition)
{
	float Distance = (PlayerPosition - GetActorLocation()).Size();

	if (Distance < Radius) 
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

