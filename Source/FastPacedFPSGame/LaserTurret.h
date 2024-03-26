// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseTurret.h"
#include "LaserTurret.generated.h"

class UNiagaraComponent;
/**
 * 
 */
UCLASS()
class FASTPACEDFPSGAME_API ALaserTurret : public ABaseTurret
{
	GENERATED_BODY()

public:

	ALaserTurret();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Niagra")
	UNiagaraComponent* LaserBeamVFXRef;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Niagra")
	UNiagaraComponent* LaserImpactVFXRef;

	UPROPERTY(EditAnywhere, Category = "Laser")
	float Range;

	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable, Category = "Laser")
	void UpdateLaser();
	
};
