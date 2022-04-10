// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterMovement.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Engine/SkeletalMeshSocket.h"
#include "DrawDebugHelpers.h"
#include "Particles/ParticleSystemComponent.h"
#include "Item.h"
#include "Components/WidgetComponent.h"
#include "Weapon.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "Ammo.h"

// Sets default values
ACharacterMovement::ACharacterMovement() : 
	//Base rates for turning/looking up
	BaseTurnRate(45.f),
	BaseLookUpRate(45.f),
	
	// Turn rate for aiming/not aiming
	HipTurnRate(90.f),
	HipLookUpRate(90.f),
	AimingTurnRate(20.f),
	AimingLookUpRate(20.f),
	//Mouse look sensitivity scale factor
	MouseHipTurnRate(1.0f),
	MouseHipLookUpRate(1.0f),
	MouseAimingTurnRate(0.2f),
	MouseAimingLookUpRate(0.2f),
	
	bAiming(false),
	// Camera FOV values
	CameraDefaultFOV(0.f), // set in BeginPlay
	CameraZoomedFOV(35.f),
	CameraCurrentFOV(0.f),
	ZoomInterpSpeed(20.f),
	//Crosshair spread factor
	CrosshairSpreadMultiplier(0.f),
	CrosshairVelocityFactor(0.f),
	CrosshairInAirFactor(0.f),
	CrosshairAimFactor(0.f),
	CrosshairShootingFactor(0.f),
	//Bullet fire timer variable
	ShootTimeDuration(0.05f),
	bFiringBullet(false),
	//Automatic fire variable
	AutomaticFireRate(0.1f),
	bShouldFire(true),
	bFireButtonPressed(false),
	bShouldTraceForItems(false),
	CameraInterpDistance(250.f),
	CameraInterpElevation(65.f),
	//Starting ammo amount
	Starting9mmAmmo(85),
	StartingARAmmo(120),
	CombatState(ECombatState::ECS_Unoccupied),
	//Pickup sound timer properties
	bShouldPlayPickupSound(true),
	bShouldPlayEquipSound(true),
	PickupSoundResetTime(0.2f),
	EquipSoundResetTime(0.2f),
	// Icon animation property
	HighlightedSlot(-1)
	
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a camera boom (pulls in towards the character if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 180.f; // The camera follows at this distance behind the character
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller
	CameraBoom->SocketOffset = FVector(0.f, 50.f, 70.f);

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach camera to end of boom
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Don't rotate when the controller rotates. Let the controller only affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = false; // Character moves in the direction of input...
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f); // ... at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create Hand Scene Component
	HandSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("HandSceneComp"));

	// Create Interpolation component
	WeaponInterpComp = CreateDefaultSubobject<USceneComponent>(TEXT("Weapon Interpolation Component"));
	WeaponInterpComp->SetupAttachment(GetFollowCamera());

	InterpComp1 = CreateDefaultSubobject<USceneComponent>(TEXT("Weapon Interpolation Component 1"));
	InterpComp1->SetupAttachment(GetFollowCamera());

	InterpComp2 = CreateDefaultSubobject<USceneComponent>(TEXT("Weapon Interpolation Component 2"));
	InterpComp2->SetupAttachment(GetFollowCamera());
	InterpComp3 = CreateDefaultSubobject<USceneComponent>(TEXT("Weapon Interpolation Component 3"));
	InterpComp3->SetupAttachment(GetFollowCamera());
	InterpComp4 = CreateDefaultSubobject<USceneComponent>(TEXT("Weapon Interpolation Component 4"));
	InterpComp4->SetupAttachment(GetFollowCamera());
	InterpComp5 = CreateDefaultSubobject<USceneComponent>(TEXT("Weapon Interpolation Component 5"));
	InterpComp5->SetupAttachment(GetFollowCamera());
	InterpComp6 = CreateDefaultSubobject<USceneComponent>(TEXT("Weapon Interpolation Component 6"));
	InterpComp6->SetupAttachment(GetFollowCamera());
}

// Called when the game starts or when spawned
void ACharacterMovement::BeginPlay()
{
	Super::BeginPlay();

	if (FollowCamera)
	{
		CameraDefaultFOV = GetFollowCamera()->FieldOfView;
		CameraCurrentFOV = CameraDefaultFOV;
	}
	// Spawn the default weapon and equip it to the mesh
	EquipWeapon(SpawnDefaultWeapon());
	Inventory.Add(EquippedWeapon);
	EquippedWeapon->SetSlotIndex(0);
	EquippedWeapon->DisableCustomDepth();
	EquippedWeapon->DisableGlowMaterial();
	EquippedWeapon->SetCharacter(this);
	
	InitializeAmmoMap();

	//Create FInterpLocation structs for each interp location. Add to array
	InitializeInterpLocations();
}

void ACharacterMovement::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation{ Controller->GetControlRotation() };
		const FRotator YawRotation{ 0, Rotation.Yaw, 0 };

		const FVector Direction{ FRotationMatrix{YawRotation}.GetUnitAxis(EAxis::X) };
		AddMovementInput(Direction, Value);
	}
}

void ACharacterMovement::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation{ Controller->GetControlRotation() };
		const FRotator YawRotation{ 0, Rotation.Yaw, 0 };

		const FVector Direction{ FRotationMatrix{YawRotation}.GetUnitAxis(EAxis::Y) };
		AddMovementInput(Direction, Value);
	}
}

void ACharacterMovement::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds()); // deg/sec * sec/frame
}

void ACharacterMovement::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds()); // deg/sec * sec/frame
}

void ACharacterMovement::Turn(float Value)
{
	float TurnScaleFactor{};
	if (bAiming)
	{
		TurnScaleFactor = MouseAimingTurnRate;
	}
	else 
	{
		TurnScaleFactor = MouseHipTurnRate;
	}

	AddControllerYawInput(Value * TurnScaleFactor);
}

void ACharacterMovement::LookUp(float Value)
{
	float LookUpScaleFactor{};
	if (bAiming)
	{
		LookUpScaleFactor = MouseAimingLookUpRate;
	}
	else
	{
		LookUpScaleFactor = MouseHipLookUpRate;
	}

	AddControllerPitchInput(Value * LookUpScaleFactor);
}

void ACharacterMovement::FireWeapon()
{
	if (EquippedWeapon == nullptr) return;

	if (CombatState != ECombatState::ECS_Unoccupied) return;

	if (WeaponHasAmmo())
	{
		PlayFireSound();
		SendBullet();
		PlayGunFireMontage();
		//Subtract one from the weapon's Ammo
		EquippedWeapon->DecrementAmmo();

		StartFireTimer();
	}
	
	//Start bullet fire timer for crosshairs
	StartCrosshairBulletFire();
}

bool ACharacterMovement::GetBeamEndLocation(
	const FVector& MuzzleSocketLocation,
	FVector& OutBeamLocation)
{
	//Check for crosshair trace hit
	FHitResult CrosshairHitResult;
	bool bCrosshairHit = TraceUnderCrosshairs(CrosshairHitResult, OutBeamLocation);

	if (bCrosshairHit)
	{
		//Tentative beam location - still need to trace from gun
		OutBeamLocation = CrosshairHitResult.Location;
	}
	else // no crosshair trace hit
	{
		// OutBeamLocation is the end location for the line trace
	}

	// Perform a second trace, this time from the gun barrel
	FHitResult WeaponTraceHit;
	const FVector WeaponTraceStart{ MuzzleSocketLocation };
	const FVector StartToEnd{ OutBeamLocation - MuzzleSocketLocation };
	const FVector WeaponTraceEnd{ MuzzleSocketLocation + StartToEnd * 1.25f };

	GetWorld()->LineTraceSingleByChannel(
		WeaponTraceHit,
		WeaponTraceStart,
		WeaponTraceEnd,
		ECollisionChannel::ECC_Visibility);
	if (WeaponTraceHit.bBlockingHit) // object between barrel and BeamEndPoint?
	{
		OutBeamLocation = WeaponTraceHit.Location;
		return true;
	}
	return false;
	
}

void ACharacterMovement::AimingButtonPressed()
{
	bAiming = true;
	
}

void ACharacterMovement::AimingButtonReleased()
{
	bAiming = false;
	
}

void ACharacterMovement::CameraInterpZoom(float DeltaTime)
{

	// Set current camera field of view
	if (bAiming)
	{
		// Interpolate to zoomed FOV
		CameraCurrentFOV = FMath::FInterpTo(
			CameraCurrentFOV,
			CameraZoomedFOV,
			DeltaTime,
			ZoomInterpSpeed);
	}
	else
	{
		// Interpolate to default FOV
		CameraCurrentFOV = FMath::FInterpTo(
			CameraCurrentFOV,
			CameraDefaultFOV,
			DeltaTime,
			ZoomInterpSpeed);
	}
	GetFollowCamera()->SetFieldOfView(CameraCurrentFOV);
	
}

void ACharacterMovement::SetLookRates()
{
	if (bAiming) {
		BaseTurnRate = AimingTurnRate;
		BaseLookUpRate = AimingLookUpRate;
	}
	else
	{
		BaseTurnRate = HipTurnRate;
		BaseLookUpRate = HipLookUpRate;
	}
}

void ACharacterMovement::CalculateCrosshairSpread(float DeltaTime)
{
	FVector2D WalkSpeedRange{ 0.f, 600.f };
	FVector2D VelocityMultiplierRange{ 0.f, 1.f };
	FVector Velocity{ GetVelocity() };
	Velocity.Z = 0.f;

	// Calculate crosshair velocity factor
	CrosshairVelocityFactor = FMath::GetMappedRangeValueClamped(
		WalkSpeedRange,
		VelocityMultiplierRange,
		Velocity.Size());

	// Calculate crosshair in air factor
	if (GetCharacterMovement()->IsFalling()) // is in air?
	{
		// Spread the crosshairs slowly while in air
		CrosshairInAirFactor = FMath::FInterpTo(
			CrosshairInAirFactor,
			2.25f,
			DeltaTime,
			2.25f);
	}
	else // Character is on the ground
	{
		// Shrink the crosshairs rapidly while on the ground
		CrosshairInAirFactor = FMath::FInterpTo(
			CrosshairInAirFactor,
			0.f,
			DeltaTime,
			30.f);
	}

	// Calculate crosshair aim factor
	if (bAiming) // Are we aiming?
	{
		// Shrink crosshairs a small amount very quickly
		CrosshairAimFactor = FMath::FInterpTo(
			CrosshairAimFactor,
			0.6f,
			DeltaTime,
			30.f);
	}
	else // Not aiming
	{
		// Spread crosshairs back to normal very quickly
		CrosshairAimFactor = FMath::FInterpTo(
			CrosshairAimFactor,
			0.f,
			DeltaTime,
			30.f);
	}

	// True 0.05 second after firing
	if (bFiringBullet)
	{
		CrosshairShootingFactor = FMath::FInterpTo(
			CrosshairShootingFactor,
			0.3f,
			DeltaTime,
			60.f);
	}
	else
	{
		CrosshairShootingFactor = FMath::FInterpTo(
			CrosshairShootingFactor,
			0.f,
			DeltaTime,
			60.f);
	}

	CrosshairSpreadMultiplier =
		0.5f +
		CrosshairVelocityFactor +
		CrosshairInAirFactor -
		CrosshairAimFactor +
		CrosshairShootingFactor;

}

void ACharacterMovement::StartCrosshairBulletFire()
{
	bFiringBullet = true;

	GetWorldTimerManager().SetTimer(
		CrosshairShootTimer,
		this,
		&ACharacterMovement::FinishCrosshairBulletFire,
		ShootTimeDuration);
}

void ACharacterMovement::FinishCrosshairBulletFire()
{
	bFiringBullet = false;
}

void ACharacterMovement::FireButtonPressed()
{
	bFireButtonPressed = true;
	FireWeapon();
	
}

void ACharacterMovement::FireButtonReleased()
{
	bFireButtonPressed = false;
}

void ACharacterMovement::StartFireTimer()
{
	CombatState = ECombatState::ECS_FireTimerInProgress;

	GetWorldTimerManager().SetTimer(
		AutoFireTimer,
		this,
		&ACharacterMovement::AutoFireReset,
		AutomaticFireRate);
	
}

void ACharacterMovement::AutoFireReset()
{
	CombatState = ECombatState::ECS_Unoccupied;

	if (WeaponHasAmmo())
	{
		if (bFireButtonPressed)
		{
			FireWeapon();
		}
	}
	else
	{
		//Reload Weapon
		ReloadWeapon();
	}
}

bool ACharacterMovement::TraceUnderCrosshairs(
	FHitResult& OutHitResult,
	FVector& OutHitLocation)
{
	// Get viewport size
	FVector2D ViewportSize;
	if (GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->GetViewportSize(ViewportSize);
	}

	// Get screen space location of crosshairs
	FVector2D CrosshairLocation(ViewportSize.X / 2.f, ViewportSize.Y / 2.f);
	FVector CrosshairWorldPosition;
	FVector CrosshairWorldDirection;

	// Get world position and direction of crosshairs
	bool bScreenToWorld = UGameplayStatics::DeprojectScreenToWorld(
		UGameplayStatics::GetPlayerController(this, 0),
		CrosshairLocation,
		CrosshairWorldPosition,
		CrosshairWorldDirection);

	if (bScreenToWorld)
	{
		//Trace from crosshair world location outward
		const FVector Start{ CrosshairWorldPosition };
		const FVector End{ Start + CrosshairWorldDirection * 50'000.f };
		OutHitLocation = End;
		GetWorld()->LineTraceSingleByChannel(
			OutHitResult,
			Start,
			End,
			ECollisionChannel::ECC_Visibility);

		if (OutHitResult.bBlockingHit)
		{
			OutHitLocation = OutHitResult.Location;
			return true;
		}
	}
	return false;
}

void ACharacterMovement::TraceForItems()
{
	if (bShouldTraceForItems)
	{
		FHitResult ItemTraceResult;
		FVector HitLocation;
		TraceUnderCrosshairs(ItemTraceResult, HitLocation);
		if (ItemTraceResult.bBlockingHit)
		{
			TraceHitItem = Cast<AItem>(ItemTraceResult.Actor);
			const auto TraceHitWeapon = Cast<AWeapon>(TraceHitItem);

			if (TraceHitWeapon)
			{
				if (HighlightedSlot == -1)
				{
					//Not currently highlight a slot; highlight one
					HighlightInventorySlot();
				}
			}
			else
			{
				//Is a slot being highlight?
				if (HighlightedSlot != -1)
				{
					//UnHighlight the slot
					UnHighlightInventorySlot();
				}
			}

			if (TraceHitItem && TraceHitItem->GetItemState() == EItemState::EIS_EquipInterping)
			{
				TraceHitItem = nullptr;
			}

			if (TraceHitItem && TraceHitItem->GetPickupWidget())
			{
				//Show Item's PickupWidget;
				TraceHitItem->GetPickupWidget()->SetVisibility(true);
				TraceHitItem->EnableCustomDepth();

				if (Inventory.Num() >= INVENTORY_CAPACITY)
				{
					//Inventory is full
					TraceHitItem->SetCharacterInventoryFull(true);
				}
				else
				{
					//Inventory has room
					TraceHitItem->SetCharacterInventoryFull(false);
				}
			}

			//we hit an AItem last Frame
			if (TraceHitItemLastFrame)
			{
				if (TraceHitItem != TraceHitItemLastFrame)
				{
					//We are hitting a different AItem this frame from last frame
					//Or AItem is null.
					TraceHitItemLastFrame->GetPickupWidget()->SetVisibility(false);
					TraceHitItemLastFrame->DisableCustomDepth();
				}
			}
			//Store a ref to HitItem fr next frame
			TraceHitItemLastFrame = TraceHitItem;
		}
	}
	else if (TraceHitItemLastFrame)
	{
		// No longer overlapping any items.
		//item last frame should not show widget
		TraceHitItemLastFrame->GetPickupWidget()->SetVisibility(false);
		TraceHitItemLastFrame->DisableCustomDepth();
	}
}

AWeapon* ACharacterMovement::SpawnDefaultWeapon()
{
	// Check the TSubclassOf Variable
	if (DefaultWeaponClass)
	{
		//Spawn the Weapon
		return GetWorld()->SpawnActor<AWeapon>(DefaultWeaponClass);
		
	}
	return nullptr;
}

void ACharacterMovement::EquipWeapon(AWeapon* WeaponToEquip, bool bSwapping)
{
	if (WeaponToEquip)
	{
		//Get the Hand Socket
		const USkeletalMeshSocket* HandSocket = GetMesh()->GetSocketByName(
			FName("RightHandSocket"));
		if (HandSocket)
		{
			//Attach the weapon to the hand socket RightHandSocket
			HandSocket->AttachActor(WeaponToEquip, GetMesh());
		}
		if (EquippedWeapon == nullptr)
		{
			//-1 == no equip weapon yet
			EquipItemDelegate.Broadcast(-1, WeaponToEquip->GetSlotIndex());
		}
		else if (!bSwapping)
		{
			EquipItemDelegate.Broadcast(EquippedWeapon->GetSlotIndex(), WeaponToEquip->GetSlotIndex());
		}
		//Set EquippedWeapon to the newly sqawned Weapon
		EquippedWeapon = WeaponToEquip;
		EquippedWeapon->SetItemState(EItemState::EIS_Equipped);
	}
}

void ACharacterMovement::DropWeapon()
{
	if (EquippedWeapon)
	{
		FDetachmentTransformRules DetachmentTransformRules(EDetachmentRule::KeepWorld, true);
		EquippedWeapon->GetItemMesh()->DetachFromComponent(DetachmentTransformRules);

		EquippedWeapon->SetItemState(EItemState::EIS_Falling);
		EquippedWeapon->ThrowWeapon();
	}
}

void ACharacterMovement::SelectButtonPressed()
{
	if (CombatState != ECombatState::ECS_Unoccupied) return;

	if (TraceHitItem)
	{
		TraceHitItem->StartItemCurve(this, true);
		TraceHitItem = nullptr;
		
	}
	
}

void ACharacterMovement::SelectButtonReleased()
{
}

void ACharacterMovement::SwapWeapon(AWeapon* WeaponToSwap)
{

	if (Inventory.Num() - 1 >= EquippedWeapon->GetSlotIndex())
	{
		Inventory[EquippedWeapon->GetSlotIndex()] = WeaponToSwap;
		WeaponToSwap->SetSlotIndex(EquippedWeapon->GetSlotIndex());
	}

	DropWeapon();
	EquipWeapon(WeaponToSwap, true);
	TraceHitItem = nullptr;
	TraceHitItemLastFrame = nullptr;
}

void ACharacterMovement::InitializeAmmoMap()
{
	AmmoMap.Add(EAmmoType::EAT_9mm, Starting9mmAmmo);
	AmmoMap.Add(EAmmoType::EAT_AR, StartingARAmmo);
}

bool ACharacterMovement::WeaponHasAmmo()
{
	if(EquippedWeapon == nullptr) return false;

	return EquippedWeapon->GetAmmo() > 0;
}

void ACharacterMovement::PlayFireSound()
{
	// Play Fire Sound
	if (FireSound)
	{
		UGameplayStatics::PlaySound2D(this, FireSound);
	}
}

void ACharacterMovement::SendBullet()
{
	//Send bullet
	const USkeletalMeshSocket* BarrelSocket =
		EquippedWeapon->GetItemMesh()->GetSocketByName("BarrelSocket");
	if (BarrelSocket)
	{
		const FTransform SocketTransform = BarrelSocket->GetSocketTransform(
			EquippedWeapon->GetItemMesh());

		if (MuzzleFlash)
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), MuzzleFlash, SocketTransform);
		}

		FVector BeamEnd;
		bool bBeamEnd = GetBeamEndLocation(
			SocketTransform.GetLocation(), BeamEnd);
		if (bBeamEnd)
		{
			if (ImpactParticles)
			{
				UGameplayStatics::SpawnEmitterAtLocation(
					GetWorld(),
					ImpactParticles,
					BeamEnd);
			}

			UParticleSystemComponent* Beam = UGameplayStatics::SpawnEmitterAtLocation(
				GetWorld(),
				BeamParticles,
				SocketTransform);
			if (Beam)
			{
				Beam->SetVectorParameter(FName("Target"), BeamEnd);
			}
		}
	}
}

void ACharacterMovement::PlayGunFireMontage()
{
	//Play Hip Fire Montage
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && HipFireMontage)
	{
		AnimInstance->Montage_Play(HipFireMontage);
		AnimInstance->Montage_JumpToSection(FName("StartFire"));
	}

}

void ACharacterMovement::ReloadButtonPressed()
{
	ReloadWeapon();
}

void ACharacterMovement::ReloadWeapon()
{
	
	if (CombatState != ECombatState::ECS_Unoccupied) return;
	if (EquippedWeapon == nullptr) return;

	// Do we have ammo of the correct type?
	if (CarryingAmmo())
	{
		CombatState = ECombatState::ECS_Reloading;
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (ReloadMontage && AnimInstance)
		{
			AnimInstance->Montage_Play(ReloadMontage);
			AnimInstance->Montage_JumpToSection(
				EquippedWeapon->GetReloadMontageSection());
		}
	}
}

void ACharacterMovement::FinishReloading()
{
	// Update the combat state
	CombatState = ECombatState::ECS_Unoccupied;

	if (EquippedWeapon == nullptr) return;

	const auto AmmoType{ EquippedWeapon->GetAmmoType() };

	//Update the AmmoMap
	if (AmmoMap.Contains(AmmoType))
	{
		// Amount of ammo the character is carrying of the EquippedWeapon type
		int32 CarriedAmmo = AmmoMap[AmmoType];

		// Space left in the magazine of EquippedWeapon
		const int32 MagEmptySpace = 
			EquippedWeapon->GetMagazineCapacity() -
			EquippedWeapon->GetAmmo();

		if (MagEmptySpace > CarriedAmmo)
		{
			// Reload the magazine with all the ammo we carrying
			EquippedWeapon->ReloadAmmo(CarriedAmmo);
			CarriedAmmo = 0;
			AmmoMap.Add(AmmoType, CarriedAmmo);
		}
		else
		{
			// fill the magazine
			EquippedWeapon->ReloadAmmo(MagEmptySpace);
			CarriedAmmo -= MagEmptySpace;
			AmmoMap.Add(AmmoType, CarriedAmmo);
		}
	}
}

bool ACharacterMovement::CarryingAmmo()
{
	if (EquippedWeapon == nullptr) return false;

	auto AmmoType = EquippedWeapon->GetAmmoType();

	if (AmmoMap.Contains(AmmoType))
	{
		return AmmoMap[AmmoType] > 0;
	}

	return false;
}

void ACharacterMovement::GrabClip()
{
	if (EquippedWeapon == nullptr) return;
	if (HandSceneComponent == nullptr) return;

	// Index for the clip bone on the Equipped Weapon
	int32 ClipBoneIndex{ EquippedWeapon->GetItemMesh()->GetBoneIndex(EquippedWeapon->GetClipBoneName()) };
	// Store the transform of the clip
	ClipTransform =  EquippedWeapon->GetItemMesh()->GetBoneTransform(ClipBoneIndex);

	FAttachmentTransformRules AttachmentRules(EAttachmentRule::KeepRelative, true);
	HandSceneComponent->AttachToComponent(GetMesh(), AttachmentRules, FName(TEXT("Hand_L")));
	HandSceneComponent->SetWorldTransform(ClipTransform);

	EquippedWeapon->SetMovingClip(true);
}

void ACharacterMovement::ReleaseClip()
{
	EquippedWeapon->SetMovingClip(false);
}

void ACharacterMovement::PickupAmmo(AAmmo* Ammo)
{
	//check to see if ammomap contain ammo's ammotype
	if (AmmoMap.Find(Ammo->GetAmmoType()))
	{
		//Get Amount of ammo in our AmmoMap for Ammo's type
		int32 AmmoCount{ AmmoMap[Ammo->GetAmmoType()] };
		AmmoCount += Ammo->GetItemCount();
		//Set the amount of ammo in the map for this type
		AmmoMap[Ammo->GetAmmoType()] = AmmoCount;
	}
	
	if (EquippedWeapon->GetAmmoType() == Ammo->GetAmmoType())
	{
		//Check to see if the gun is empty
		if (EquippedWeapon->GetAmmo() == 0)
		{
			ReloadWeapon();
		}
	}
	Ammo->Destroy();
}

void ACharacterMovement::InitializeInterpLocations()
{
	FInterpLocation WeaponLocation{ WeaponInterpComp, 0 };
	InterpLocation.Add(WeaponLocation);

	FInterpLocation InterpLoc1{ InterpComp1, 0 };
	InterpLocation.Add(InterpLoc1);

	FInterpLocation InterpLoc2{ InterpComp2, 0 };
	InterpLocation.Add(InterpLoc2);

	FInterpLocation InterpLoc3{ InterpComp3, 0 };
	InterpLocation.Add(InterpLoc3);

	FInterpLocation InterpLoc4{ InterpComp4, 0 };
	InterpLocation.Add(InterpLoc4);

	FInterpLocation InterpLoc5{ InterpComp5, 0 };
	InterpLocation.Add(InterpLoc5);

	FInterpLocation InterpLoc6{ InterpComp6, 0 };
	InterpLocation.Add(InterpLoc6);
}

void ACharacterMovement::FKeyPressed()
{
	if (EquippedWeapon->GetSlotIndex() == 0) return;

	ExchangeInventoryItems(EquippedWeapon->GetSlotIndex(), 0);
	
}

void ACharacterMovement::OneKeyPressed()
{
	if (EquippedWeapon->GetSlotIndex() == 1) return;

	ExchangeInventoryItems(EquippedWeapon->GetSlotIndex(), 1);
}

void ACharacterMovement::TwoKeyPressed()
{
	if (EquippedWeapon->GetSlotIndex() == 2) return;

	ExchangeInventoryItems(EquippedWeapon->GetSlotIndex(), 2);
}

void ACharacterMovement::ThreeKeyPressed()
{
	if (EquippedWeapon->GetSlotIndex() == 3) return;

	ExchangeInventoryItems(EquippedWeapon->GetSlotIndex(), 3);
}

void ACharacterMovement::FourKeyPressed()
{
	if (EquippedWeapon->GetSlotIndex() == 4) return;

	ExchangeInventoryItems(EquippedWeapon->GetSlotIndex(), 4);
}

void ACharacterMovement::FiveKeyPressed()
{
	if (EquippedWeapon->GetSlotIndex() == 5) return;

	ExchangeInventoryItems(EquippedWeapon->GetSlotIndex(), 5);
}

void ACharacterMovement::ExchangeInventoryItems(int32 CurrentItemIndex, int32 NewItemIndex)
{
	const bool bCanExchangeItems =
		(CurrentItemIndex != NewItemIndex) &&
		(NewItemIndex < Inventory.Num()) && 
		(CombatState == ECombatState::ECS_Unoccupied || CombatState == ECombatState::ECS_Equipping);

	if (bCanExchangeItems)
	{
		auto OldEquippedWeapon = EquippedWeapon;
		auto NewWeapon = Cast<AWeapon>(Inventory[NewItemIndex]);
		EquipWeapon(NewWeapon);

		OldEquippedWeapon->SetItemState(EItemState::EIS_Pickedup);
		NewWeapon->SetItemState(EItemState::EIS_Equipped);

		CombatState = ECombatState::ECS_Equipping;
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (AnimInstance && EquipMontage)
		{
			AnimInstance->Montage_Play(EquipMontage, 1.0f);
			AnimInstance->Montage_JumpToSection(FName("Equip"));
		}
		NewWeapon->PlayEquipSound(true);
	}
}

int32 ACharacterMovement::GetEmptyInventorySlot()
{
	for (int32 i=0; i< Inventory.Num();i++)
	{
		if (Inventory[i] == nullptr)
		{
			return i;
		}
	}
	if (Inventory.Num() < INVENTORY_CAPACITY)
	{
		return Inventory.Num();
	}
	return -1;//inventory is full
}

void ACharacterMovement::HighlightInventorySlot()
{
	const int32 EmptySlot{ GetEmptyInventorySlot() };
	HighlightIconDelegate.Broadcast(EmptySlot, true);
	HighlightedSlot = EmptySlot;
}

void ACharacterMovement::UnHighlightInventorySlot()
{
	HighlightIconDelegate.Broadcast(HighlightedSlot, false);
	HighlightedSlot = -1;
}

int32 ACharacterMovement::GetInterpLocationIndex()
{
	int32 LowestIndex = 1;
	int32 LowestCount = INT_MAX;

	for (int32 i = 1; i < InterpLocation.Num(); i++)
	{
		if (InterpLocation[i].ItemCount < LowestCount)
		{
			LowestIndex = i;
			LowestCount = InterpLocation[i].ItemCount;
		}
	}

	return LowestIndex;
}

// Called every frame
void ACharacterMovement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Handle interpolation for zoom when aiming
	
	//CameraInterpZoom(DeltaTime);

	//Change look sensitivity
	SetLookRates();
	//Calculate crosshair spread multiplier
	CalculateCrosshairSpread(DeltaTime);

	//Check OverlappedItemCount, then trace for items
	TraceForItems();
	
}

// Called to bind functionality to input
void ACharacterMovement::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACharacterMovement::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACharacterMovement::MoveRight);
	PlayerInputComponent->BindAxis("TurnRate", this, &ACharacterMovement::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ACharacterMovement::LookUpAtRate);
	PlayerInputComponent->BindAxis("Turn", this, &ACharacterMovement::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &ACharacterMovement::LookUp);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("FireButton", IE_Pressed, this,
		&ACharacterMovement::FireButtonPressed);
	PlayerInputComponent->BindAction("FireButton", IE_Released, this,
		&ACharacterMovement::FireButtonReleased);

	PlayerInputComponent->BindAction("AimingButton", IE_Pressed, this,
		&ACharacterMovement::AimingButtonPressed);
	PlayerInputComponent->BindAction("AimingButton", IE_Released, this,
		&ACharacterMovement::AimingButtonReleased);

	PlayerInputComponent->BindAction("Select", IE_Pressed, this,
		&ACharacterMovement::SelectButtonPressed);
	PlayerInputComponent->BindAction("Select", IE_Released, this,
		&ACharacterMovement::SelectButtonReleased);

	PlayerInputComponent->BindAction("ReloadButton", IE_Pressed, this,
		&ACharacterMovement::ReloadButtonPressed);

	PlayerInputComponent->BindAction("FKey", IE_Pressed, this,
		&ACharacterMovement::FKeyPressed);
	PlayerInputComponent->BindAction("1Key", IE_Pressed, this,
		&ACharacterMovement::OneKeyPressed);
	PlayerInputComponent->BindAction("2Key", IE_Pressed, this,
		&ACharacterMovement::TwoKeyPressed);
	PlayerInputComponent->BindAction("3Key", IE_Pressed, this,
		&ACharacterMovement::ThreeKeyPressed);
	PlayerInputComponent->BindAction("4Key", IE_Pressed, this,
		&ACharacterMovement::FourKeyPressed);
	PlayerInputComponent->BindAction("5Key", IE_Pressed, this,
		&ACharacterMovement::FiveKeyPressed);
}

void ACharacterMovement::FinishEquipping()
{
	CombatState = ECombatState::ECS_Unoccupied;
}

void ACharacterMovement::ResetPickupSoundTimer()
{
	bShouldPlayPickupSound = true;
}

void ACharacterMovement::ResetEquipSoundTimer()
{
	bShouldPlayEquipSound = true;
}

float ACharacterMovement::GetCrosshairSpreadMultiplier() const
{
	return CrosshairSpreadMultiplier;
}

void ACharacterMovement::IncrementOverlappedItemCount(int8 Amount)
{
	if (OverlappedItemCount + Amount <= 0)
	{
		OverlappedItemCount = 0;
		bShouldTraceForItems = false;
	}
	else
	{
		OverlappedItemCount += Amount;
		bShouldTraceForItems = true;
	}
}

//FVector ACharacterMovement::GetCameraInterpLocation()
//{
//	FVector CameraWorldLocation{ FollowCamera->GetComponentLocation() };
//	FVector CameraForward{ FollowCamera->GetForwardVector() };
//	// Desired = CameraWorldLocation + Forward * A + Up * B
//	return CameraWorldLocation + CameraForward * CameraInterpDistance
//		+ FVector(0.f, 0.f, CameraInterpElevation);
//
//}

void ACharacterMovement::GetPickupItem(AItem* Item)
{
	Item->PlayEquipSound();

	auto Weapon = Cast<AWeapon>(Item);
	if (Weapon)
	{
		if (Inventory.Num() < INVENTORY_CAPACITY)
		{
			Weapon->SetSlotIndex(Inventory.Num());
			Inventory.Add(Weapon);
			Weapon->SetItemState(EItemState::EIS_Pickedup);
		}
		else // Inventory is full! Swap with EquippedWeapon
		{
			SwapWeapon(Weapon);
		}
		
	}

	auto Ammo = Cast<AAmmo>(Item);
	if (Ammo) 
	{
		PickupAmmo(Ammo);
	}
}

FInterpLocation ACharacterMovement::GetInterpLocation(int32 Index)
{
	if (Index <= InterpLocation.Num())
	{
		return InterpLocation[Index];

	}
	return FInterpLocation();
}

void ACharacterMovement::IncrementInterpLocItemCount(int32 Index, int32 Amount)
{
	if (Amount < -1 || Amount > 1)return;

	if (InterpLocation.Num() >= Index)
	{
		InterpLocation[Index].ItemCount += Amount;
	}
}

void ACharacterMovement::StartPickupSoundTimer()
{
	bShouldPlayPickupSound = false;
	GetWorldTimerManager().SetTimer(
		PickupSoundTimer,
		this, 
		&ACharacterMovement::ResetPickupSoundTimer,
		PickupSoundResetTime);
}

void ACharacterMovement::StartEquipSoundTimer()
{
	bShouldPlayEquipSound = false;
	GetWorldTimerManager().SetTimer(
		EquipSoundTimer,
		this,
		&ACharacterMovement::ResetEquipSoundTimer,
		EquipSoundResetTime);
}
