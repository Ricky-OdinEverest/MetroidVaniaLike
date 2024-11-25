// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "Interaction/EnemyInterface.h"
#include "MVEnemy.generated.h"

class UAbilitySystemComponent;
class UAttributeSet;

UCLASS()
class METROIDVANIA_API AMVEnemy : public ACharacter, public IEnemyInterface, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMVEnemy();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }

	UFUNCTION(BlueprintCallable)
	virtual void HighlightActor() override;
	UFUNCTION(BlueprintCallable)
	virtual void UnHighlightActor() override;
	
protected:
	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;


};
