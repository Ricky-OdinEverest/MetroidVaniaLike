// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/MVPlayerState.h"

#include "AbilitySystem/MVAttributeSet.h"
#include "AbilitySystem/MyAbilitySystemComponent.h"

AMVPlayerState::AMVPlayerState()
{
	NetUpdateFrequency = 100;

	AbilitySystemComponent = CreateDefaultSubobject<UMyAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);

	AttributeSet = CreateDefaultSubobject<UMVAttributeSet>("AttributeSet");
}

UAbilitySystemComponent* AMVPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
