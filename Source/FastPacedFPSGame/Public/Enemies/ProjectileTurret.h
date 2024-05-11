// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseTurret.h"
#include "ProjectileTurret.generated.h"

/**
 * 
 */
UCLASS()
class FASTPACEDFPSGAME_API AProjectileTurret : public ABaseTurret
{
	GENERATED_BODY()
	
public:

	AProjectileTurret();

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = Projectile)
	TSubclassOf<AActor> Projectile;

	UFUNCTION(BlueprintCallable, Category = "Firing")
	void Fire();
};
