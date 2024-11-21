// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Protagonist.h"


UAbilitySystemComponent* AProtagonist::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Sets default values
AProtagonist::AProtagonist()
{

	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>("Spring Arm");
	SpringArm->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void AProtagonist::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AProtagonist::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


