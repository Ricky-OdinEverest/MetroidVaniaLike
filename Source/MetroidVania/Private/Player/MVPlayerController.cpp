// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/MVPlayerController.h"

#include "EnhancedInputSubsystems.h"
#include "GameFramework/PlayerController.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/Character.h"
#include "Interaction/EnemyInterface.h"

AMVPlayerController::AMVPlayerController()
{
	bReplicates = true;
}

void AMVPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);


}


void AMVPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
		//Add Input Mapping Context
		check(IMC_MV);
	
		UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
		check(Subsystem);
		Subsystem->AddMappingContext(IMC_MV, 0);
	
	
}

void AMVPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);

	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMVPlayerController::Move );

	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AMVPlayerController::JumpStarted );
}


// From Protag
void AMVPlayerController::JumpStarted(const FInputActionValue& Value)
{
	if (ACharacter* ControlledCharacter = Cast<ACharacter>(GetPawn()))
	{
		ControlledCharacter->Jump();
	}
}

void AMVPlayerController::JumpEnded(const FInputActionValue& Value)
{
}

void AMVPlayerController::Attack(const FInputActionValue& Value)
{
}


void AMVPlayerController::UpdateDirection(float MoveDirection)
{
	if(APawn* ControlledPawn = GetPawn())//
	{
		FRotator CurrentRotation = ControlledPawn->GetActorRotation();

		if (MoveDirection < 0.0f)
		{
			if (CurrentRotation.Yaw != 180.0f)
			{
				SetControlRotation(FRotator(CurrentRotation.Pitch, 180.0f, CurrentRotation.Roll));
			}
		}
		else if (MoveDirection > 0.0f)
		{
			if (CurrentRotation.Yaw != 0.0f)
			{
				SetControlRotation(FRotator(CurrentRotation.Pitch, 0.0f, CurrentRotation.Roll));
			}
		}
	}
}


void AMVPlayerController::Move(const FInputActionValue& Value)
{

	float MoveActionValue = Value.Get<float>();
	FVector Direction = FVector(1.0f, 0.0f, 0.0f);
	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddMovementInput(Direction, MoveActionValue);
	}
	
	UpdateDirection(MoveActionValue);

	
}

