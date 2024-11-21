// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interaction/EnemyInterface.h"
#include "MVEnemy.generated.h"

UCLASS()
class METROIDVANIA_API AMVEnemy : public ACharacter, public IEnemyInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMVEnemy();

	UFUNCTION(BlueprintCallable)
	virtual void HighlightActor() override;
	UFUNCTION(BlueprintCallable)
	virtual void UnHighlightActor() override;

};
