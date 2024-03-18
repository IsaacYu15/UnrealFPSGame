
// Fill out your copyright notice in the Description page of Project Settings.
#include "Components/BoxComponent.h"
#include "DrawDebugHelpers.h"
#include "LVL_INGR_LerpBetweenPoints.h"

// Sets default values for this component's properties
ULVL_INGR_LerpBetweenPoints::ULVL_INGR_LerpBetweenPoints()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	if (GetOwner())
	{
		StartLocation = GetOwner()->GetActorLocation();
		EndLocation = StartLocation + GetOwner()->GetActorForwardVector() * Range;
	}
}


// Called when the game starts
void ULVL_INGR_LerpBetweenPoints::BeginPlay()
{
	Super::BeginPlay();

}


// Called every frame
void ULVL_INGR_LerpBetweenPoints::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (TimeElapsed < LerpDuration) {
		GetOwner()->SetActorLocation(FMath::Lerp(StartLocation, EndLocation, TimeElapsed / LerpDuration));
		TimeElapsed += DeltaTime;

	} else if (Looping) {
		
		TimeElapsed = 0;
		FVector TempVector = StartLocation;

		StartLocation = EndLocation;
		EndLocation = TempVector;
	}
}

