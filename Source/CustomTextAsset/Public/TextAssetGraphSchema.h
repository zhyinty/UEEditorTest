// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SoundClassGraph/SoundClassGraphSchema.h"
#include "TextAssetGraphSchema.generated.h"

/**
 * 
 */
UCLASS()
class CUSTOMTEXTASSET_API UTextAssetGraphSchema : public UEdGraphSchema
{
	GENERATED_BODY()
	
	
	
public:
	virtual void GetGraphContextActions(FGraphContextMenuBuilder& ContextMenuBuilder) const override;

};
