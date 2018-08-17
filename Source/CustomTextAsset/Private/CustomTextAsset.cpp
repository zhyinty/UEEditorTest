// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CustomTextAsset.h"
#include "TextAssetActions.h"
#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "FCustomTextAssetModule"

void FCustomTextAssetModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	IAssetTools& assetTool = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	RegisterAssetTypeAction(assetTool, MakeShareable(new FTextAssetActions()));
}

void FCustomTextAssetModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

void FCustomTextAssetModule::RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action)
{
	AssetTools.RegisterAssetTypeActions(Action);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCustomTextAssetModule, CustomTextAsset)