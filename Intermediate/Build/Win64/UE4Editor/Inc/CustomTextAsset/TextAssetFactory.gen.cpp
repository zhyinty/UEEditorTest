// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomTextAsset/Public/TextAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextAssetFactory() {}
// Cross Module References
	CUSTOMTEXTASSET_API UClass* Z_Construct_UClass_UTextAssetFactory_NoRegister();
	CUSTOMTEXTASSET_API UClass* Z_Construct_UClass_UTextAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CustomTextAsset();
// End Cross Module References
	void UTextAssetFactory::StaticRegisterNativesUTextAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UTextAssetFactory_NoRegister()
	{
		return UTextAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTextAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomTextAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TextAssetFactory.h" },
		{ "ModuleRelativePath", "Public/TextAssetFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextAssetFactory_Statics::ClassParams = {
		&UTextAssetFactory::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTextAssetFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextAssetFactory, 653790061);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextAssetFactory(Z_Construct_UClass_UTextAssetFactory, &UTextAssetFactory::StaticClass, TEXT("/Script/CustomTextAsset"), TEXT("UTextAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
