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

	UFUNCTION()
	void DestroyHitNumber(UUserWidget* HitNumber);

	void UpdateHitNumbers();

	/** Called when something overlap with aggro sphere*/
	UFUNCTION()
	void AggroSphereOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFormSweep,
		const FHitResult& SweepResult);

	UFUNCTION(BlueprintCallable)
	void SetStunned(bool Stunned);

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

	/** Time before a HitNumber is removed from the screen*/
	UPROPERTY(EditAnywhere, Category = Combat, meta = (AllowedPrivateAccess = "true"))
	float HitNumberDestroyTime;

	/** Behavior tree for the ai character*/
	UPROPERTY(EditAnywhere, Category = "Behavior Tree", meta = (AllowedPrivateAccess = "true"))
	class UBehaviorTree* BehaviorTree;

	/** Point for the enemy to move to*/
	UPROPERTY(EditAnywhere, Category = "Behavior Tree", meta = (AllowedPrivateAccess = "true", MakeEditWidget = "true"))
	FVector PatrolPoint;

	/** Second Point for the enemy to move to */
	UPROPERTY(EditAnywhere, Category = "Behavior Tree", meta = (AllowedPrivateAccess = "true", MakeEditWidget = "true"))
	FVector PatrolPoint2;

	class AEnemyController* EnemyController;

	/** Overlap sphere for when the enemy become hostile*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowedPrivateAccess = "true", MakeEditWidget = "true"))
	class USphereComponent* AggroSphere;

	/** True when playing the get hit animation*/
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite, Category = Combat, meta = (AllowedPrivateAccess = "true"))
	bool bStunned;

	/** Chance of being stun 0 no stun chance 1 100% stun chance*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowedPrivateAccess = "true"))
	float StunChance;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void BulletHit_Implementation(FHitResult HitResult) override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	FORCEINLINE FString GetHeadBone() const { return HeadBone; }

	FORCEINLINE UBehaviorTree* GetBehaviorTree() const { return BehaviorTree; }

	UFUNCTION(BlueprintImplementableEvent)
	void ShowHitNumber(int32 Damage, FVector HitLocation, bool bHeadShot);
};
