// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomTextAsset/Public/TextAssetFactoryNew.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextAssetFactoryNew() {}
// Cross Module References
	CUSTOMTEXTASSET_API UClass* Z_Construct_UClass_UTextAssetFactoryNew_NoRegister();
	CUSTOMTEXTASSET_API UClass* Z_Construct_UClass_UTextAssetFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CustomTextAsset();
// End Cross Module References
	void UTextAssetFactoryNew::StaticRegisterNativesUTextAssetFactoryNew()
	{
	}
	UClass* Z_Construct_UClass_UTextAssetFactoryNew_NoRegister()
	{
		return UTextAssetFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UTextAssetFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextAssetFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomTextAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAssetFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "TextAssetFactoryNew.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TextAssetFactoryNew.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextAssetFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextAssetFactoryNew>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextAssetFactoryNew_Statics::ClassParams = {
		&UTextAssetFactoryNew::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTextAssetFactoryNew_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextAssetFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextAssetFactoryNew()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextAssetFactoryNew_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextAssetFactoryNew, 2315823958);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextAssetFactoryNew(Z_Construct_UClass_UTextAssetFactoryNew, &UTextAssetFactoryNew::StaticClass, TEXT("/Script/CustomTextAsset"), TEXT("UTextAssetFactoryNew"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextAssetFactoryNew);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
