// Fill out your copyright notice in the Description page of Project Settings.
#include "Enemies/ProjectileTurret.h"


AProjectileTurret::AProjectileTurret()
{

}

void AProjectileTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector PlayerPosition = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	if (PlayerInAttackRadius(PlayerPosition))
	{
		if (!GetWorldTimerManager().IsTimerActive(AProjectileTurret::FireTimeHandle))
		{
			GetWorldTimerManager().SetTimer(FireTimeHandle, this, &AProjectileTurret::Fire, FireRate, false);
		}
	}

}

void AProjectileTurret::Fire()
{
	GetWorld()->SpawnActor<AActor>(Projectile, HeadRef->GetComponentLocation(), HeadRef->GetRelativeTransform().GetRotation().Rotator());
}
