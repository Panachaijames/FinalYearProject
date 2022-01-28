// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAnimInstance.h"
#include "CharacterMovement.h"

void  UShooterAnimInstance::UpdateAnimationProperties(float DeltaTime)
{
	if (ShooterCharacter == nullptr)
	{
		ShooterCharacter = Cast<ACharacterMovement>(TryGetPawnOwner());
	}
	if (ShooterCharacter) 
	{
		//Get the lateral speed of the character from velocity

		FVector Velocity{ ShooterCharacter->GetVelocity() };
		Velocity.Z = 0;
		Speed = Velocity.Size();

		//Is the character is in the air

		bIsInAir = ShooterCharacter->GetCharacterMovement()->IsFalling();

		//Is the Character accelerating?
		if (ShooterCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f)
		{
			bIsAccelerating = true;
		}
		else 
		{
			bIsAccelerating = false;
		}
	}
}

void UShooterAnimInstance::NativeInitializeAnimation()
{
	ShooterCharacter = Cast<ACharacterMovement>(TryGetPawnOwner());
}
