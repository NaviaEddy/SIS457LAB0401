// Fill out your copyright notice in the Description page of Project Settings.


#include "Misil.h"
#include "GameFramework/ProjectileMovementComponent.h"

AMisil::AMisil()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	ProjectileMovement->InitialSpeed = 1000.0f;
	ProjectileMovement->MaxSpeed = 1000.0f;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}
