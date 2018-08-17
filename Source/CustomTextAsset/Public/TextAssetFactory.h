// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "TextAssetFactory.generated.h"

/**
 * 
 */
UCLASS()
class CUSTOMTEXTASSET_API UTextAssetFactory : public UFactory
{
	GENERATED_BODY()
public:
	UTextAssetFactory(const FObjectInitializer& Initializer);


	virtual UObject* FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled) override;


	virtual bool FactoryCanImport(const FString& Filename) override;

};
