// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShooterPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class FINALPROJECT_API AShooterPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AShooterPlayerController();



protected:

	virtual void BeginPlay() override;


private:

	/** Reference to the Overall HUD Overlay Blueprint Class */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class UUserWidget> HUDOverlayClass;
	
	/** Variable to holds the HUD Overlay Widget after Creating it */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Widgets, meta = (AllowPrivateAccess = "true"))
	UUserWidget* HUDOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Widget, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class UUserWidget> DeathMenuClass;
};
