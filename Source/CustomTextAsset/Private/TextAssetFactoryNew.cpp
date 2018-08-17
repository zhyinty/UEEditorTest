// Fill out your copyright notice in the Description page of Project Settings.

#include "TextAssetFactoryNew.h"
#include "TextAsset.h"
#include "Misc/FileHelper.h"

#define LOCTEXT_NAMESPACE "TextAssetFactoryNew"

UTextAssetFactoryNew::UTextAssetFactoryNew(const FObjectInitializer& Initializer)
{
	SupportedClass = UTextAsset::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
	Formats.Add(TEXT("txt; import text file format"));
}

bool UTextAssetFactoryNew::ShouldShowInNewMenu() const
{
	return true;
}

FText UTextAssetFactoryNew::GetDisplayName() const
{
	return LOCTEXT("TextAssetFactoryNew.DispalyName", "TextAsset");
}

UObject* UTextAssetFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UTextAsset>(InParent, InClass, InName, Flags);
}


#undef LOCTEXT_NAMESPACE