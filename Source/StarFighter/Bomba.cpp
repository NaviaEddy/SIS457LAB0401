// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomba.h"
#include "GameFramework/ProjectileMovementComponent.h"

ABomba::ABomba()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	ProjectileMovement->InitialSpeed = 10.0f;
	ProjectileMovement->MaxSpeed = 10.0f;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}
