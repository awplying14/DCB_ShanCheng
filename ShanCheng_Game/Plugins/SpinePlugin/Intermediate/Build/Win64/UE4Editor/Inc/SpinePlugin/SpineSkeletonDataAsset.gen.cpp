// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpinePlugin/Public/SpineSkeletonDataAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineSkeletonDataAsset() {}
// Cross Module References
	SPINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSpineAnimationStateMixData();
	UPackage* Z_Construct_UPackage__Script_SpinePlugin();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonDataAsset_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonDataAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
// End Cross Module References
class UScriptStruct* FSpineAnimationStateMixData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPINEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpineAnimationStateMixData, Z_Construct_UPackage__Script_SpinePlugin(), TEXT("SpineAnimationStateMixData"), sizeof(FSpineAnimationStateMixData), Get_Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Hash());
	}
	return Singleton;
}
template<> SPINEPLUGIN_API UScriptStruct* StaticStruct<FSpineAnimationStateMixData>()
{
	return FSpineAnimationStateMixData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpineAnimationStateMixData(FSpineAnimationStateMixData::StaticStruct, TEXT("/Script/SpinePlugin"), TEXT("SpineAnimationStateMixData"), false, nullptr, nullptr);
static struct FScriptStruct_SpinePlugin_StaticRegisterNativesFSpineAnimationStateMixData
{
	FScriptStruct_SpinePlugin_StaticRegisterNativesFSpineAnimationStateMixData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpineAnimationStateMixData")),new UScriptStruct::TCppStructOps<FSpineAnimationStateMixData>);
	}
} ScriptStruct_SpinePlugin_StaticRegisterNativesFSpineAnimationStateMixData;
	struct Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mix_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_To;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpineAnimationStateMixData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_Mix_MetaData[] = {
		{ "Category", "SpineAnimationStateMixData" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_Mix = { "Mix", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpineAnimationStateMixData, Mix), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_Mix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_Mix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_To_MetaData[] = {
		{ "Category", "SpineAnimationStateMixData" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpineAnimationStateMixData, To), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_To_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_To_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_From_MetaData[] = {
		{ "Category", "SpineAnimationStateMixData" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpineAnimationStateMixData, From), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_From_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_Mix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_From,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpinePlugin,
		nullptr,
		&NewStructOps,
		"SpineAnimationStateMixData",
		sizeof(FSpineAnimationStateMixData),
		alignof(FSpineAnimationStateMixData),
		Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpineAnimationStateMixData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpinePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpineAnimationStateMixData"), sizeof(FSpineAnimationStateMixData), Get_Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Hash() { return 3185203766U; }
	void USpineSkeletonDataAsset::StaticRegisterNativesUSpineSkeletonDataAsset()
	{
	}
	UClass* Z_Construct_UClass_USpineSkeletonDataAsset_NoRegister()
	{
		return USpineSkeletonDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_USpineSkeletonDataAsset_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skeletonDataFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_skeletonDataFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rawData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rawData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rawData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Animations;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Animations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skins_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Skins;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Skins_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Slots;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Slots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bones;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Bones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MixData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MixData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MixData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMix_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineSkeletonDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpinePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Spine" },
		{ "IncludePath", "SpineSkeletonDataAsset.h" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_importData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_importData = { "importData", nullptr, (EPropertyFlags)0x00220808000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonDataAsset, importData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_importData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_importData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_skeletonDataFileName_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_skeletonDataFileName = { "skeletonDataFileName", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonDataAsset, skeletonDataFileName), METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_skeletonDataFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_skeletonDataFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_rawData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_rawData = { "rawData", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonDataAsset, rawData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_rawData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_rawData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_rawData_Inner = { "rawData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Events_MetaData[] = {
		{ "Category", "SpineSkeletonDataAsset" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonDataAsset, Events), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Events_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Animations_MetaData[] = {
		{ "Category", "SpineSkeletonDataAsset" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Animations = { "Animations", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonDataAsset, Animations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Animations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Animations_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Animations_Inner = { "Animations", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Skins_MetaData[] = {
		{ "Category", "SpineSkeletonDataAsset" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Skins = { "Skins", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonDataAsset, Skins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Skins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Skins_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Skins_Inner = { "Skins", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Slots_MetaData[] = {
		{ "Category", "SpineSkeletonDataAsset" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonDataAsset, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Slots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Slots_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Bones_MetaData[] = {
		{ "Category", "SpineSkeletonDataAsset" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonDataAsset, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Bones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Bones_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_MixData_MetaData[] = {
		{ "Category", "SpineSkeletonDataAsset" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_MixData = { "MixData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonDataAsset, MixData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_MixData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_MixData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_MixData_Inner = { "MixData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpineAnimationStateMixData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_DefaultMix_MetaData[] = {
		{ "Category", "SpineSkeletonDataAsset" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_DefaultMix = { "DefaultMix", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonDataAsset, DefaultMix), METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_DefaultMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_DefaultMix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpineSkeletonDataAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_importData,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_skeletonDataFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_rawData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_rawData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Events,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Events_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Animations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Animations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Skins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Skins_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Slots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Slots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Bones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Bones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_MixData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_MixData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_DefaultMix,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineSkeletonDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineSkeletonDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::ClassParams = {
		&USpineSkeletonDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpineSkeletonDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpineSkeletonDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpineSkeletonDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpineSkeletonDataAsset, 3360119151);
	template<> SPINEPLUGIN_API UClass* StaticClass<USpineSkeletonDataAsset>()
	{
		return USpineSkeletonDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpineSkeletonDataAsset(Z_Construct_UClass_USpineSkeletonDataAsset, &USpineSkeletonDataAsset::StaticClass, TEXT("/Script/SpinePlugin"), TEXT("USpineSkeletonDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineSkeletonDataAsset);
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USpineSkeletonDataAsset)
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
