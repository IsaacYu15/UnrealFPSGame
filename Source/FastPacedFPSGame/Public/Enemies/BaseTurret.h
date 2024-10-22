// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "BaseTurret.generated.h"

UCLASS()
class FASTPACEDFPSGAME_API ABaseTurret : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseTurret();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Radius = 200;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float RotationSpeed = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float FireRate = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float DamageAmount = 1.0f;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* HeadRef;

protected:
	FTimerHandle FireTimeHandle;

	bool PlayerInAttackRadius(FVector PlayerPosition);

	void TrackPlayer(FVector PlayerPosition, float Alpha);

	void Damage(float Damage, AActor* OtherActor);

private: 
	float TimeElapsed;



};
