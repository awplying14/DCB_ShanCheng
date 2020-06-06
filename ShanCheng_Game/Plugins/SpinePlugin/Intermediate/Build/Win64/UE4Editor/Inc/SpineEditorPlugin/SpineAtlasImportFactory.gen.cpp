// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineEditorPlugin/Public/SpineAtlasImportFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineAtlasImportFactory() {}
// Cross Module References
	SPINEEDITORPLUGIN_API UClass* Z_Construct_UClass_USpineAtlasAssetFactory_NoRegister();
	SPINEEDITORPLUGIN_API UClass* Z_Construct_UClass_USpineAtlasAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SpineEditorPlugin();
// End Cross Module References
	void USpineAtlasAssetFactory::StaticRegisterNativesUSpineAtlasAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_USpineAtlasAssetFactory_NoRegister()
	{
		return USpineAtlasAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_USpineAtlasAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineAtlasAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SpineEditorPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAtlasAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpineAtlasImportFactory.h" },
		{ "ModuleRelativePath", "Public/SpineAtlasImportFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineAtlasAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineAtlasAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpineAtlasAssetFactory_Statics::ClassParams = {
		&USpineAtlasAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpineAtlasAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpineAtlasAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpineAtlasAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpineAtlasAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpineAtlasAssetFactory, 458207783);
	template<> SPINEEDITORPLUGIN_API UClass* StaticClass<USpineAtlasAssetFactory>()
	{
		return USpineAtlasAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpineAtlasAssetFactory(Z_Construct_UClass_USpineAtlasAssetFactory, &USpineAtlasAssetFactory::StaticClass, TEXT("/Script/SpineEditorPlugin"), TEXT("USpineAtlasAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineAtlasAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
