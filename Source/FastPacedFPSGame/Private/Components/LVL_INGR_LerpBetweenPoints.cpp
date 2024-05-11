
// Fill out your copyright notice in the Description page of Project Settings.
#include "Components/LVL_INGR_LerpBetweenPoints.h"

#include "Components/BoxComponent.h"
#include "DrawDebugHelpers.h"


// Sets default values for this component's properties
ULVL_INGR_LerpBetweenPoints::ULVL_INGR_LerpBetweenPoints()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void ULVL_INGR_LerpBetweenPoints::BeginPlay()
{
	Super::BeginPlay();

	if (GetOwner())
	{
		StartLocation = GetOwner()->GetActorLocation();

		Arrow = GetOwner()->FindComponentByClass<UArrowComponent>();
		if (Arrow == nullptr)
		{
			EndLocation = StartLocation + GetOwner()->GetActorForwardVector() * Range;
		}
		else
		{
			EndLocation = StartLocation + Arrow->GetForwardVector() * Range;
		}

	}

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

