// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "MVPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class IEnemyInterface;
/**
 * 
 */
UCLASS()
class METROIDVANIA_API AMVPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AMVPlayerController();
	
	virtual void PlayerTick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

	virtual void SetupInputComponent() override;

private:
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputMappingContext> IMC_MV;

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> JumpAction;
	
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> AttackAction;

	void Move(const FInputActionValue& InputActionValue);
	void JumpStarted(const FInputActionValue& InputActionValue);
	void JumpEnded(const FInputActionValue& InputActionValue);
	void Attack(const FInputActionValue& InputActionValue);
	void UpdateDirection(float MoveDirection);
	

};
