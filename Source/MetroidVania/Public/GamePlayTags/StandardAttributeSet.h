// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GamePlayTags/Attributes/AttributeHelpers.h"
#include "AbilitySystemComponent.h"
#include "StandardAttributeSet.generated.h"

/**
 * Stored as a float modified by gameplay effect
 * Attribute Sets have logic that manages groups of Attributes
 */
UCLASS()
class METROIDVANIA_API UStandardAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

	/*public:
		UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_Health)
		FGameplayAttributeData Health;
		ATTRIBUTE_ACCESSORS(UStandardAttributeSet, Health);
	
		UPROPERTY(BlueprintReadOnly, Category = "HealthMax", ReplicatedUsing=OnRep_HealthMax)
		FGameplayAttributeData HealthMax;
		ATTRIBUTE_ACCESSORS(UStandardAttributeSet, HealthMax);
	
		// Meta Data Attribute, ServerSideOnly
		UPROPERTY(BlueprintReadOnly, Category = "Damage", ReplicatedUsing=OnRep_Damage)
		FGameplayAttributeData Damage;
		ATTRIBUTE_ACCESSORS(UStandardAttributeSet, Damage);
	
	
		virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	
		virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;
	
		UFUNCTION()
		void OnRep_Health(const FGameplayAttributeData& OldHealth);
	
		UFUNCTION()
		void OnRep_HealthMax(const FGameplayAttributeData& OldHealthMax);
		
		UFUNCTION()
		void OnRep_Damage(const FGameplayAttributeData& OldDamage);
	};*/
};
