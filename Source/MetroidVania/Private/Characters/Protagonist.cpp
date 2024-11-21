// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Protagonist.h"




// Sets default values
AProtagonist::AProtagonist()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>("Spring Arm");
	SpringArm->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);

	// The Following is set in blueprint
	// Ensure the character uses the controller's yaw rotation
	//bUseControllerRotationYaw = true;

	// Disable character movement component's orientation to movement
	//GetCharacterMovement()->bOrientRotationToMovement = false;

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


