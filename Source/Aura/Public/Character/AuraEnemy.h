// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
public:
	AAuraEnemy();

	/** Enemy Interface */
	virtual void HighLightActor() override;
	virtual void UnHighLightActor() override;
	/** End Enemy Interface */
	
protected:
	UPROPERTY(BlueprintReadOnly)
	bool bHighlighted = false;

	virtual void BeginPlay() override;

	virtual void InitAbilityActorInfo() override;
};
