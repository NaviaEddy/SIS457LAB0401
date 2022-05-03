// Fill out your copyright notice in the Description page of Project Settings.


#include "Bala.h"
#include "GameFramework/ProjectileMovementComponent.h"

ABala::ABala()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	ProjectileMovement->InitialSpeed = 2000.0f;
	ProjectileMovement->MaxSpeed = 2000.0f;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

void ABala::BeginPlay()
{
	Super::BeginPlay();
}

void ABala::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
