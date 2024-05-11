// Fill out your copyright notice in the Description page of Project Settings.
#include "Enemies/LaserTurret.h"

#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Components/SceneComponent.h"


ALaserTurret::ALaserTurret()
{
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SetRootComponent(RootComponent);

	LaserBeamVFXRef = CreateDefaultSubobject<UNiagaraComponent>(TEXT("VFX_LaserBeam"));
	LaserImpactVFXRef = CreateDefaultSubobject<UNiagaraComponent>(TEXT("VFX_LaserImpact"));

}

void ALaserTurret::UpdateLaser()
{
	FHitResult Hit;
	FVector TraceStart = HeadRef->GetComponentLocation();
	FVector TraceEnd = TraceStart + HeadRef->GetForwardVector() * Range;

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);

	GetWorld()->LineTraceSingleByChannel(Hit, TraceStart, TraceEnd, ECC_Pawn, QueryParams);

	if (Hit.bBlockingHit)
	{
		LaserBeamVFXRef->SetVectorParameter("LaserEnd", Hit.ImpactPoint);
		Damage(DamageAmount, Hit.GetActor());
	}
	else
	{
		LaserBeamVFXRef->SetVectorParameter("LaserEnd", TraceEnd);
	}
}


void ALaserTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector PlayerPosition = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	if (PlayerInAttackRadius(PlayerPosition))
	{
		UpdateLaser();
	}

}