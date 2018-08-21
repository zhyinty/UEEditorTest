// Fill out your copyright notice in the Description page of Project Settings.

#include "TextAssetEditor.h"
#include "TextAsset.h"

#define LOCTEXT_NAMESPACE "TextAssetEditor"

FTextAssetEditor::FTextAssetEditor()
{
}

FTextAssetEditor::~FTextAssetEditor()
{
}

void FTextAssetEditor::InitTextAssetEditor(UTextAsset* TextAsset, TSharedPtr<IToolkitHost> Host)
{
	const TSharedRef<FTabManager::FLayout> StandaloneDefaultLayout = FTabManager::NewLayout("Standalone.TextAsset_Layout_v4")
		->AddArea
		(
			FTabManager::NewPrimaryArea()->SetOrientation(Orient_Vertical)
			->Split
			(
				FTabManager::NewStack()
				->SetSizeCoefficient(0.1f)
				->SetHideTabWell(true)
				->AddTab(GetToolbarTabId(), ETabState::OpenedTab)
			)
			->Split
			(
				FTabManager::NewSplitter()->SetOrientation(Orient_Horizontal)
				->SetSizeCoefficient(0.9f)
				->Split
				(
					FTabManager::NewStack()
					->SetSizeCoefficient(0.6f)
					->AddTab(FName("ViewportTab"), ETabState::OpenedTab)
					->SetHideTabWell(true)
				)
			)
		);
	const FName StaticMeshEditorAppIdentifier = FName(TEXT("StaticTextAssetApp"));
	FAssetEditorToolkit::InitAssetEditor(EToolkitMode::Standalone, Host, StaticMeshEditorAppIdentifier, StandaloneDefaultLayout, true, true, TextAsset);
}

void FTextAssetEditor::AddReferencedObjects(FReferenceCollector& Collector)
{
	
}

FName FTextAssetEditor::GetToolkitFName() const
{
	return FName("AssetEditor");
}

FText FTextAssetEditor::GetBaseToolkitName() const
{
	return LOCTEXT("TextAssetEditorName", "TextEditor");
}

FString FTextAssetEditor::GetWorldCentricTabPrefix() const
{
	return LOCTEXT("WorldCentricTabPrefix", "TextEditor ").ToString();
}

void FTextAssetEditor::InvokeTab(const struct FTabId& TabId)
{
	
}

FLinearColor FTextAssetEditor::GetWorldCentricTabColorScale() const
{
	return FLinearColor::Red;
}

void FTextAssetEditor::RegisterTabSpawners(const TSharedRef<FTabManager>& TabManager)
{
	FAssetEditorToolkit::RegisterTabSpawners(TabManager);
	TabManager->RegisterTabSpawner(FName("ViewportTab"), FOnSpawnTab::CreateSP(this, &FTextAssetEditor::SpawnTab_Viewport));
}

void FTextAssetEditor::UnregisterTabSpawners(const TSharedRef<FTabManager>& TabManager)
{
	FAssetEditorToolkit::UnregisterTabSpawners(TabManager);
}

TSharedRef<SDockTab> FTextAssetEditor::SpawnTab_Viewport(const FSpawnTabArgs& Args)
{
	TSharedRef<SDockTab> SpawnTab = SNew(SDockTab)
		.Label(LOCTEXT("SpanDockName", "Test"))
		[
			SNew(SButton)
		];
	return SpawnTab;
}

#undef LOCTEXT_NAMESPACVE