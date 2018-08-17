// Fill out your copyright notice in the Description page of Project Settings.

#include "TextAssetFactory.h"
#include "TextAsset.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"


UTextAssetFactory::UTextAssetFactory(const FObjectInitializer& Initializer)
{
	SupportedClass = UTextAsset::StaticClass();
	bEditorImport = true;
	Formats.Add(TEXT("txt;import text file format"));
}

UObject* UTextAssetFactory::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	UTextAsset* Asset = NULL;
	FString Text;
	if (FFileHelper::LoadFileToString(Text, *Filename))
	{
		Asset = NewObject<UTextAsset>(InParent, InClass, InName, Flags);
		Asset->Text = FText::FromString(Text);
		return Asset;
	}
	return NULL;
}

bool UTextAssetFactory::FactoryCanImport(const FString& Filename)
{
	if (FPaths::GetExtension(Filename) == "txt")
	{
		return true;
	}
	else
	{
		return false;
	}
}
