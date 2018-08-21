// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
/**
 * 
 */
class CUSTOMTEXTASSET_API FTextAssetActions : public FAssetTypeActions_Base
{
public:
	
	
	virtual FColor GetTypeColor() const override;


	virtual UClass* GetSupportedClass() const override;

	
	virtual FText GetName() const override;


	virtual uint32 GetCategories() override;


	virtual void OpenAssetEditor(const TArray<UObject *>& InObjects, TSharedPtr<IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>()) override;

};
