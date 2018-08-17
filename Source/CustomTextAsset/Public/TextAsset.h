// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TextAsset.generated.h"

/**
 * 
 */
UCLASS()
class CUSTOMTEXTASSET_API UTextAsset : public UObject
{
	GENERATED_BODY()
	
public:

	virtual void BeginDestroy() override;


	UPROPERTY(EditDefaultsOnly, Category = TextAsset)
	FText Text;
	
	
};
