// Fill out your copyright notice in the Description page of Project Settings.

#include "TextAssetActions.h"
#include "TextAsset.h"
#include "TextAssetEditor.h"

#define LOCTEXT_NAMESPACE "TextAssetActions"

FColor FTextAssetActions::GetTypeColor() const
{
	return FColor::Red;
}

UClass* FTextAssetActions::GetSupportedClass() const
{
	return UTextAsset::StaticClass();
}

FText FTextAssetActions::GetName() const
{
	return NSLOCTEXT("TextAssetActions", "TextAssetName", "Text Asset");
}

uint32 FTextAssetActions::GetCategories()
{
	return EAssetTypeCategories::Misc;
}

void FTextAssetActions::OpenAssetEditor(const TArray<UObject *>& InObjects, TSharedPtr<IToolkitHost> EditWithinLevelEditor /*= TSharedPtr<IToolkitHost>()*/)
{
	TSharedPtr<FTextAssetEditor> EditorPtr = MakeShareable<FTextAssetEditor>(new FTextAssetEditor());
	EditorPtr->InitTextAssetEditor(Cast<UTextAsset>(InObjects[0]), EditWithinLevelEditor);
}

#undef LOCTEXT_NAMESPACE