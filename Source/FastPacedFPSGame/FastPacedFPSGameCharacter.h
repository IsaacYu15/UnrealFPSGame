// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "FastPacedFPSGameCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class AFastPacedFPSGameCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* AttackAction;
	
public:
	AFastPacedFPSGameCharacter();

protected:
	virtual void BeginPlay();

public:
		
	virtual void Tick(float DeltaTime) override;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* GrappleAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* DashAction;

	/** Bool for AnimBP to switch to another animation set */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Weapon)
	bool bHasRifle;

	void Jump() override;

	UPROPERTY(EditAnywhere)
	float wallRunSpeed;

	UPROPERTY(BlueprintReadOnly, Category = Input)
	int leanDireciton = 1;

	UPROPERTY(BlueprintReadOnly, Category = Input)
	bool isWallRunning;

	UPROPERTY(BlueprintReadOnly, Category = Input)
	bool isGrappling;

	UPROPERTY(BlueprintReadOnly, Category = Input)
	bool isDashing;

	UPROPERTY()
	FVector wallJumpOffDir;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	float wallJumpOffVelocity;
	
	UPROPERTY()
	FVector wallRunVelocity;

	UPROPERTY()
	FVector grappleVelocity;

	UPROPERTY()
	FVector grappleLocation;

	UPROPERTY(EditAnywhere)
	float grappleSpeed;

	UPROPERTY(BlueprintReadOnly, Category = Input)
	bool isAttacking;

	UPROPERTY(EditAnywhere)
	int32 attackCooldownTime = 3;

	FTimerHandle CountdownTimerHandle;

	UPROPERTY()
	FVector dashLocation;

	UPROPERTY()
	FVector dashVelocity;

	UPROPERTY(EditAnywhere)
	float dashSpeed;

	UPROPERTY(EditAnywhere)
	float dashDistance;



protected:
	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	/** Called for grapple movement */
	void Grapple();

	/** Called for attacking */
	void Attack();

	/** Called for dash movement */
	void Dash();
	

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	/** Returns Mesh1P subobject **/
	UFUNCTION(BlueprintCallable)
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void Timer();

private: 

	
};

