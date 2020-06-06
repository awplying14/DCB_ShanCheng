// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineEditorPlugin/Public/SpineSkeletonImportFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineSkeletonImportFactory() {}
// Cross Module References
	SPINEEDITORPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonAssetFactory_NoRegister();
	SPINEEDITORPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SpineEditorPlugin();
// End Cross Module References
	void USpineSkeletonAssetFactory::StaticRegisterNativesUSpineSkeletonAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_USpineSkeletonAssetFactory_NoRegister()
	{
		return USpineSkeletonAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_USpineSkeletonAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineSkeletonAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SpineEditorPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpineSkeletonImportFactory.h" },
		{ "ModuleRelativePath", "Public/SpineSkeletonImportFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineSkeletonAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineSkeletonAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpineSkeletonAssetFactory_Statics::ClassParams = {
		&USpineSkeletonAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpineSkeletonAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpineSkeletonAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpineSkeletonAssetFactory, 1557401854);
	template<> SPINEEDITORPLUGIN_API UClass* StaticClass<USpineSkeletonAssetFactory>()
	{
		return USpineSkeletonAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpineSkeletonAssetFactory(Z_Construct_UClass_USpineSkeletonAssetFactory, &USpineSkeletonAssetFactory::StaticClass, TEXT("/Script/SpineEditorPlugin"), TEXT("USpineSkeletonAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineSkeletonAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
