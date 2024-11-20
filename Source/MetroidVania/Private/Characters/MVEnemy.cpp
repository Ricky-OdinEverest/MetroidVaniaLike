// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/MVEnemy.h"

// Sets default values
AMVEnemy::AMVEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMVEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMVEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMVEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

