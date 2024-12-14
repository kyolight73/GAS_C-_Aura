// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AuraPlayer.h"
#include "GameFramework/CharacterMovementComponent.h"

AAuraPlayer::AAuraPlayer()
{
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.0f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
}
