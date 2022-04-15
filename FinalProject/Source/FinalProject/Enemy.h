// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BulletHitInterface.h"
#include "Enemy.generated.h"

UCLASS()
class FINALPROJECT_API AEnemy : public ACharacter, public IBulletHitInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintNativeEvent)
	void ShowHealthBar();
	void ShowHealthBar_Implementation();

	UFUNCTION(BlueprintImplementableEvent)
	void HideHealthBar();

	void Die();

	void PlayHitMontage(FName Section, float PlayRate = 1.0f);

	void ResetHitReactTimer();

	UFUNCTION(BlueprintCallable)
	void StoreHitNumber(UUserWidget* HitNumber, FVector Location);

	/** PArticle to spawn when hit by bullet*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowedPrivateAccess = "true"))
	class UParticleSystem* ImpactParticles;

	/**Sound to play when hit by bullet*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowedPrivateAccess = "true"))
	class USoundCue* ImpactSound;

	/** Current Health of the enemy*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowedPrivateAccess = "true"))
	float Health;

	/** Maximum health of the enemy*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowedPrivateAccess = "true"))
	float MaxHealth;

	/** Name of the head bone*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowedPrivateAccess = "true"))
	FString HeadBone;

	/** Time to display health bar once shot*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowedPrivateAccess = "true"))
	float HealthBarDisplayTime;

	FTimerHandle HealthBarTimer;

	/** Montage containing hit and death animation*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowedPrivateAccess = "true"))
	UAnimMontage* HitMontage;

	FTimerHandle HitReactTimer;

	bool bCanHitReact;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowedPrivateAccess = "true"))
	float HitReactTimeMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowedPrivateAccess = "true"))
	float HitReactTimeMax;

	/** Map to store hit number widget and their hit location*/
	UPROPERTY(VisibleAnywhere, Category = Combat, meta = (AllowedPrivateAccess = "true"))
	TMap<UUserWidget*, FVector> HitNumbers;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void BulletHit_Implementation(FHitResult HitResult) override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	FORCEINLINE FString GetHeadBone() const { return HeadBone; }

	UFUNCTION(BlueprintImplementableEvent)
	void ShowHitNumber(int32 Damage, FVector HitLocation);
};
