// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpinePlugin/Public/SpineAtlasAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineAtlasAsset() {}
// Cross Module References
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineAtlasAsset_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineAtlasAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SpinePlugin();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void USpineAtlasAsset::StaticRegisterNativesUSpineAtlasAsset()
	{
	}
	UClass* Z_Construct_UClass_USpineAtlasAsset_NoRegister()
	{
		return USpineAtlasAsset::StaticClass();
	}
	struct Z_Construct_UClass_USpineAtlasAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_importData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_importData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_atlasFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_atlasFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rawData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rawData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_atlasPages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_atlasPages;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_atlasPages_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineAtlasAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpinePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAtlasAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Spine" },
		{ "IncludePath", "SpineAtlasAsset.h" },
		{ "ModuleRelativePath", "Public/SpineAtlasAsset.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_importData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpineAtlasAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_importData = { "importData", nullptr, (EPropertyFlags)0x00220808000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAtlasAsset, importData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_importData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_importData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasFileName_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpineAtlasAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasFileName = { "atlasFileName", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAtlasAsset, atlasFileName), METADATA_PARAMS(Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_rawData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpineAtlasAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_rawData = { "rawData", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAtlasAsset, rawData), METADATA_PARAMS(Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_rawData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_rawData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasPages_MetaData[] = {
		{ "Category", "SpineAtlasAsset" },
		{ "ModuleRelativePath", "Public/SpineAtlasAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasPages = { "atlasPages", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineAtlasAsset, atlasPages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasPages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasPages_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasPages_Inner = { "atlasPages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpineAtlasAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_importData,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_rawData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasPages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAtlasAsset_Statics::NewProp_atlasPages_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineAtlasAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineAtlasAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpineAtlasAsset_Statics::ClassParams = {
		&USpineAtlasAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpineAtlasAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpineAtlasAsset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpineAtlasAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAtlasAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpineAtlasAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpineAtlasAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpineAtlasAsset, 4140753621);
	template<> SPINEPLUGIN_API UClass* StaticClass<USpineAtlasAsset>()
	{
		return USpineAtlasAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpineAtlasAsset(Z_Construct_UClass_USpineAtlasAsset, &USpineAtlasAsset::StaticClass, TEXT("/Script/SpinePlugin"), TEXT("USpineAtlasAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineAtlasAsset);
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USpineAtlasAsset)
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
