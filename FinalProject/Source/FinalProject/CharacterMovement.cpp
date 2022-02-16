// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterMovement.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Engine/SkeletalMeshSocket.h"
#include "DrawDebugHelpers.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
ACharacterMovement::ACharacterMovement()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 600.0f;
	GetCharacterMovement()->AirControl = 0.2f;

	//Create a camera boom 
	//(pulls in towards the character) if there is a collision
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	//The camera follows at this distance behind the character
	CameraBoom->TargetArmLength = 300.0f;
	//Rotate the arm based on the controller
	CameraBoom->bUsePawnControlRotation = true;
	CameraBoom->SocketOffset = FVector(0.f, 50.f, 50.f);

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FolloeCamera"));
	FollowCamera->SetupAttachment(CameraBoom,USpringArmComponent::SocketName);

	FollowCamera->bUsePawnControlRotation = false;
}



// Called when the game starts or when spawned
void ACharacterMovement::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACharacterMovement::FireWeapon()
{
	if (FireSound) {
		UGameplayStatics::PlaySound2D(this, FireSound);
	}
	const USkeletalMeshSocket* BarrelSocket = GetMesh()->GetSocketByName("BarrelSocket");
	if (BarrelSocket) {
		const FTransform SocketTransform = BarrelSocket->GetSocketTransform(GetMesh());

		if (MuzzleFlash) 
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), MuzzleFlash, SocketTransform);
		}

		//Get current size of viewport
		FVector2D ViewportSize;
		if (GEngine && GEngine->GameViewport) 
		{
			GEngine->GameViewport->GetViewportSize(ViewportSize);
		}
		//Get screen space locaion of crosshair
		FVector2D CrosshairLocation(ViewportSize.X / 2.f, ViewportSize.Y / 2.f);
		CrosshairLocation.Y -= 50.f;
		FVector CrosshairWorldPosition;
		FVector CrosshairWorldDirection;

		//Get world position and direction of crosshairs
		bool bScreenToWorld = UGameplayStatics::DeprojectScreenToWorld(UGameplayStatics::GetPlayerController(this, 0),
			CrosshairLocation,
			CrosshairWorldPosition,
			CrosshairWorldDirection);
		//was deprojection successful
		if (bScreenToWorld)
		{
			FHitResult ScreenTraceHit;
			const FVector Start{ CrosshairWorldPosition };
			const FVector End{ CrosshairWorldPosition + CrosshairWorldDirection * 50'000.f };

			//Set beam end point to line trace end point
			FVector BeamEndPoint{ End };
			//Trace outward from crosshair world location
			GetWorld()->LineTraceSingleByChannel(
				ScreenTraceHit, 
				Start, 
				End, 
				ECollisionChannel::ECC_Visibility);
			if (ScreenTraceHit.bBlockingHit)//was there a trace hit?
			{
				//Beam end point is now trace hit location
				BeamEndPoint = ScreenTraceHit.Location;
				if (ImpactParticles)
				{
					UGameplayStatics::SpawnEmitterAtLocation(
						GetWorld(),
						ImpactParticles,
						ScreenTraceHit.Location);
				}

			}
			if (BeamParticles)
			{
				UParticleSystemComponent* Beam = UGameplayStatics::SpawnEmitterAtLocation(
					GetWorld(),
					BeamParticles,
					SocketTransform);
				if (Beam)
				{
					Beam->SetVectorParameter(FName("Target"), BeamEndPoint);
				}
			}
		}
		/*
		FHitResult FireHit;
		const FVector Start{ SocketTransform.GetLocation() };
		const FQuat Rotation{ SocketTransform.GetRotation() };
		const FVector RotationAxis{ Rotation.GetAxisX() };
		const FVector End{ Start + RotationAxis * 50'000.f };

		FVector BeamEndPoint{ End };

		GetWorld()->LineTraceSingleByChannel(FireHit, Start, End, ECollisionChannel::ECC_Visibility);
		if (FireHit.bBlockingHit)
		{
			//DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 2.f);
			//DrawDebugPoint(GetWorld(), FireHit.Location, 5.f, FColor::Red, false, 2.f);
		
			BeamEndPoint = FireHit.Location;

			if (ImpactParticles)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactParticles, FireHit.Location);
			}
		}

		if (BeamParticles)
		{
			UParticleSystemComponent* Beam = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), BeamParticles, SocketTransform);
			if (Beam)
			{
				Beam->SetVectorParameter(FName("Target"), BeamEndPoint);
			}
		}
		*/
	}
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && HipFireMontage) {
		AnimInstance->Montage_Play(HipFireMontage);
		AnimInstance->Montage_JumpToSection(FName("StartFire"));
	}
}

// Called every frame
void ACharacterMovement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterMovement::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACharacterMovement::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACharacterMovement::MoveRight);

	PlayerInputComponent->BindAction("FireButton", IE_Pressed, this, &ACharacterMovement::FireWeapon);
}
void ACharacterMovement::MoveForward(float Axis)
{
	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(Direction, Axis);
}

void ACharacterMovement::MoveRight(float Axis)
{
	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(Direction, Axis);
}
