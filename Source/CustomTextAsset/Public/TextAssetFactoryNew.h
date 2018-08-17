// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "TextAssetFactoryNew.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, hideCategories =Object)
class CUSTOMTEXTASSET_API UTextAssetFactoryNew : public UFactory
{
	GENERATED_BODY()
	
public:

	UTextAssetFactoryNew(const FObjectInitializer& Initializer);

	virtual bool CanCreateNew() const override
	{
		return true;
	}

	virtual bool ShouldShowInNewMenu() const override;

	virtual FText GetDisplayName() const override;
	
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);
};
