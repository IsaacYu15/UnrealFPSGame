// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/CharacterMovementComponent.h"
#include "FastPacedFPSGameCharacter.h"
#include "ActorHealthComponent.h"

// Sets default values for this component's properties
UActorHealthComponent::UActorHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	
	DefaultHealth = 100;
	Health = DefaultHealth;

}


// Called when the game starts
void UActorHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	AActor* Owner = GetOwner(); //get owner of actor component

	if (Owner) {
		Owner->OnTakeAnyDamage.AddDynamic(this, &UActorHealthComponent::TakeDamage); //bind to delegate
	}
}

//ADD KNOCKBACK AND DAMAGE INTO THE PARAMETERS
void UActorHealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0) {
		return;
	}

	if (AFastPacedFPSGameCharacter* Player = Cast< AFastPacedFPSGameCharacter>(this->GetOwner()))
	{
		if (Player->MovementState == State::Blocking)
		{
			//knockback
			return;
		}
	}

	Health = FMath::Clamp(Health - Damage, 0.0f, DefaultHealth);

	OnTakeDamageDelagate.Broadcast();

}







