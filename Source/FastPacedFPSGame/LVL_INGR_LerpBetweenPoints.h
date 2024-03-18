// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LVL_INGR_LerpBetweenPoints.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FASTPACEDFPSGAME_API ULVL_INGR_LerpBetweenPoints : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULVL_INGR_LerpBetweenPoints();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	FVector StartLocation;
	FVector EndLocation;

public:	

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float LerpDuration;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float Range;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	bool Looping;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	float TimeElapsed;
};
