// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/MVEnemy.h"

#include "AbilitySystem/MVAttributeSet.h"
#include "AbilitySystem/MyAbilitySystemComponent.h"
#include "MetroidVania/MetroidVania.h"

// Sets default values
AMVEnemy::AMVEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

	AbilitySystemComponent = CreateDefaultSubobject<UMyAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);

	AttributeSet = CreateDefaultSubobject<UMVAttributeSet>("AttributeSet");

}

UAbilitySystemComponent* AMVEnemy::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AMVEnemy::HighlightActor()
{
	
	GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
}

void AMVEnemy::UnHighlightActor()
{
	GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_WHITE);
}
