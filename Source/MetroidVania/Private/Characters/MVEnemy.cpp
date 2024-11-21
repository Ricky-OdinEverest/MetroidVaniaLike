// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/MVEnemy.h"

#include "MetroidVania/MetroidVania.h"

// Sets default values
AMVEnemy::AMVEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

}

void AMVEnemy::HighlightActor()
{
	//GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "HighlightActor");
	//Weapon->SetRenderCustomDepth(true);
	//Weapon->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);

	///GetMesh()->GetSocketBoneName("WeaponHandSocket")SetRenderCustomDepth(true);
}

void AMVEnemy::UnHighlightActor()
{
	GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_WHITE);
	//GetMesh()->SetRenderCustomDepth(false);
	//Weapon->SetRenderCustomDepth(false);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "UNHighlightActor");
}
