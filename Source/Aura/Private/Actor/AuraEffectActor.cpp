// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/AuraEffectActor.h"

// Sets default values
AAuraEffectActor::AAuraEffectActor()
{
	PrimaryActorTick.bCanEverTick = false;
	Sphere = CreateDefaultSubobject<USphereComponent>("Sphere");
}

void AAuraEffectActor::BeginPlay()
{
	Super::BeginPlay();
	
}

