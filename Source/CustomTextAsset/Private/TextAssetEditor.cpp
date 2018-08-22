// Fill out your copyright notice in the Description page of Project Settings.

#include "TextAssetEditor.h"
#include "TextAsset.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "TextAssetGraph.h"
#include "TextAssetGraphSchema.h"

#define LOCTEXT_NAMESPACE "TextAssetEditor"

FTextAssetEditor::FTextAssetEditor()
{
}

FTextAssetEditor::~FTextAssetEditor()
{
}

void FTextAssetEditor::InitTextAssetEditor(UTextAsset* TextAsset, TSharedPtr<IToolkitHost> Host)
{
	TheTextAsset = TextAsset;
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
	Collector.AddReferencedObject(TheTextAsset);
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
	UEdGraph* Graph = FBlueprintEditorUtils::CreateNewGraph(TheTextAsset, NAME_None, UTextAssetGraph::StaticClass(), UTextAssetGraphSchema::StaticClass());
	TSharedRef<SDockTab> SpawnTab = SNew(SDockTab)
		.Label(LOCTEXT("SpanDockName", "Test"))
		[
			SNew(SGraphEditor)
			.GraphToEdit(Graph)
		];
	return SpawnTab;
}

#undef LOCTEXT_NAMESPACE