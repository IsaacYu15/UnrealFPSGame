// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorHealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTakeDamageDelegate);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable )
class FASTPACEDFPSGAME_API UActorHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UActorHealthComponent();

	UPROPERTY(BlueprintAssignable, Category="Health")
	FOnTakeDamageDelegate OnTakeDamageDelagate;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float DefaultHealth;

	UPROPERTY(BlueprintReadOnly)
	float Health;

	UFUNCTION()
	void TakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);


		
};
