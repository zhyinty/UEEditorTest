// Fill out your copyright notice in the Description page of Project Settings.

#include "TextAssetGraphSchema.h"




void UTextAssetGraphSchema::GetGraphContextActions(FGraphContextMenuBuilder& ContextMenuBuilder) const
{
	Super::GetGraphContextActions(ContextMenuBuilder);

	TSharedPtr<FEdGraphSchemaAction> action = MakeShareable(new FEdGraphSchemaAction(FText::FromString("Haha"), FText::FromString("LLLL"), FText::FromString("1111111"), 0));
	ContextMenuBuilder.AddAction(action);
}
