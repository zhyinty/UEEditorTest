// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


class UTextAsset;
/**
 * 
 */
class CUSTOMTEXTASSET_API FTextAssetEditor: public FGCObject, public FEditorUndoClient, public FAssetEditorToolkit
{
public:
	FTextAssetEditor();
	~FTextAssetEditor();

	void InitTextAssetEditor(UTextAsset* TextAsset, TSharedPtr<IToolkitHost> Host);

	virtual void AddReferencedObjects(FReferenceCollector& Collector) override;




	virtual FName GetToolkitFName() const override;


	virtual FText GetBaseToolkitName() const override;


	virtual FString GetWorldCentricTabPrefix() const override;


	virtual void InvokeTab(const struct FTabId& TabId) override;


	virtual FLinearColor GetWorldCentricTabColorScale() const override;


	virtual void RegisterTabSpawners(const TSharedRef<FTabManager>& TabManager) override;


	virtual void UnregisterTabSpawners(const TSharedRef<FTabManager>& TabManager) override;

	TSharedRef<SDockTab> SpawnTab_Viewport(const FSpawnTabArgs& Args);
};
