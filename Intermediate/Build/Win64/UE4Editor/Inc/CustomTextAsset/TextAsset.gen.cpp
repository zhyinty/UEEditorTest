// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomTextAsset/Public/TextAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextAsset() {}
// Cross Module References
	CUSTOMTEXTASSET_API UClass* Z_Construct_UClass_UTextAsset_NoRegister();
	CUSTOMTEXTASSET_API UClass* Z_Construct_UClass_UTextAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CustomTextAsset();
// End Cross Module References
	void UTextAsset::StaticRegisterNativesUTextAsset()
	{
	}
	UClass* Z_Construct_UClass_UTextAsset_NoRegister()
	{
		return UTextAsset::StaticClass();
	}
	struct Z_Construct_UClass_UTextAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomTextAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TextAsset.h" },
		{ "ModuleRelativePath", "Public/TextAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAsset_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "TextAsset" },
		{ "ModuleRelativePath", "Public/TextAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextAsset_Statics::NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UTextAsset, Text), METADATA_PARAMS(Z_Construct_UClass_UTextAsset_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextAsset_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextAsset_Statics::NewProp_Text,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextAsset_Statics::ClassParams = {
		&UTextAsset::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UTextAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTextAsset_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTextAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextAsset, 2906394838);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextAsset(Z_Construct_UClass_UTextAsset, &UTextAsset::StaticClass, TEXT("/Script/CustomTextAsset"), TEXT("UTextAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
