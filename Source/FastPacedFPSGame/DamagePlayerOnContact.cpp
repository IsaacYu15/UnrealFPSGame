// Fill out your copyright notice in the Description page of Project Settings.
#include "Components/BoxComponent.h"
#include "Engine/DamageEvents.h"

#include "DamagePlayerOnContact.h"

// Sets default values for this component's properties
UDamagePlayerOnContact::UDamagePlayerOnContact()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;




	// ...
}


// Called when the game starts
void UDamagePlayerOnContact::BeginPlay()
{
	Super::BeginPlay();

	AActor* Owner = GetOwner(); //get owner of actor component

	if (Owner) {
		
		UBoxComponent* CollisionComponent = Owner->FindComponentByClass<UBoxComponent>();

		if (CollisionComponent)
		{
			CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &UDamagePlayerOnContact::OnOverlapBegin);
			CollisionComponent->OnComponentEndOverlap.AddDynamic(this, &UDamagePlayerOnContact::OnOverlapEnd);
		}

	}



	// ...
	
}


// Called every frame
void UDamagePlayerOnContact::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UDamagePlayerOnContact::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	TSubclassOf<UDamageType> DmgTypeClass = UDamageType::StaticClass(); //damage type maybe necessary later down the line
	OtherActor->TakeDamage(Damage, FDamageEvent(DmgTypeClass), nullptr, this->GetOwner());
}

void UDamagePlayerOnContact::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}

