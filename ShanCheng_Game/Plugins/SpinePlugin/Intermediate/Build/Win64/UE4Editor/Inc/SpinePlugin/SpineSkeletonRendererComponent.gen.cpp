// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpinePlugin/Public/SpineSkeletonRendererComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineSkeletonRendererComponent() {}
// Cross Module References
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonRendererComponent_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonRendererComponent();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent();
	UPackage* Z_Construct_UPackage__Script_SpinePlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void USpineSkeletonRendererComponent::StaticRegisterNativesUSpineSkeletonRendererComponent()
	{
	}
	UClass* Z_Construct_UClass_USpineSkeletonRendererComponent_NoRegister()
	{
		return USpineSkeletonRendererComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpineSkeletonRendererComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateCollision_MetaData[];
#endif
		static void NewProp_bCreateCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TextureParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_atlasScreenBlendMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_atlasScreenBlendMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_atlasScreenBlendMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_atlasMultiplyBlendMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_atlasMultiplyBlendMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_atlasMultiplyBlendMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_atlasAdditiveBlendMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_atlasAdditiveBlendMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_atlasAdditiveBlendMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_atlasNormalBlendMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_atlasNormalBlendMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_atlasNormalBlendMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenBlendMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScreenBlendMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiplyBlendMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MultiplyBlendMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveBlendMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditiveBlendMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalBlendMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NormalBlendMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProceduralMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpinePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Spine" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "SpineSkeletonRendererComponent.h" },
		{ "ModuleRelativePath", "Public/SpineSkeletonRendererComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_bCreateCollision_MetaData[] = {
		{ "Category", "Spine" },
		{ "Comment", "/** Whether to generate collision geometry for the skeleton, or not. */" },
		{ "ModuleRelativePath", "Public/SpineSkeletonRendererComponent.h" },
		{ "ToolTip", "Whether to generate collision geometry for the skeleton, or not." },
	};
#endif
	void Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_bCreateCollision_SetBit(void* Obj)
	{
		((USpineSkeletonRendererComponent*)Obj)->bCreateCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_bCreateCollision = { "bCreateCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpineSkeletonRendererComponent), &Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_bCreateCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_bCreateCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_bCreateCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineSkeletonRendererComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonRendererComponent, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_TextureParameterName_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineSkeletonRendererComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_TextureParameterName = { "TextureParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonRendererComponent, TextureParameterName), METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_TextureParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_TextureParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_DepthOffset_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineSkeletonRendererComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_DepthOffset = { "DepthOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonRendererComponent, DepthOffset), METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_DepthOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_DepthOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasScreenBlendMaterials_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineSkeletonRendererComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasScreenBlendMaterials = { "atlasScreenBlendMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonRendererComponent, atlasScreenBlendMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasScreenBlendMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasScreenBlendMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasScreenBlendMaterials_Inner = { "atlasScreenBlendMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasMultiplyBlendMaterials_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineSkeletonRendererComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasMultiplyBlendMaterials = { "atlasMultiplyBlendMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonRendererComponent, atlasMultiplyBlendMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasMultiplyBlendMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasMultiplyBlendMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasMultiplyBlendMaterials_Inner = { "atlasMultiplyBlendMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasAdditiveBlendMaterials_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineSkeletonRendererComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasAdditiveBlendMaterials = { "atlasAdditiveBlendMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonRendererComponent, atlasAdditiveBlendMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasAdditiveBlendMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasAdditiveBlendMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasAdditiveBlendMaterials_Inner = { "atlasAdditiveBlendMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasNormalBlendMaterials_MetaData[] = {
		{ "Category", "Spine" },
		{ "Comment", "// Need to hold on to the dynamic instances, or the GC will kill us while updating them\n" },
		{ "ModuleRelativePath", "Public/SpineSkeletonRendererComponent.h" },
		{ "ToolTip", "Need to hold on to the dynamic instances, or the GC will kill us while updating them" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasNormalBlendMaterials = { "atlasNormalBlendMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonRendererComponent, atlasNormalBlendMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasNormalBlendMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasNormalBlendMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasNormalBlendMaterials_Inner = { "atlasNormalBlendMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_ScreenBlendMaterial_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineSkeletonRendererComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_ScreenBlendMaterial = { "ScreenBlendMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonRendererComponent, ScreenBlendMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_ScreenBlendMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_ScreenBlendMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_MultiplyBlendMaterial_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineSkeletonRendererComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_MultiplyBlendMaterial = { "MultiplyBlendMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonRendererComponent, MultiplyBlendMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_MultiplyBlendMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_MultiplyBlendMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_AdditiveBlendMaterial_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineSkeletonRendererComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_AdditiveBlendMaterial = { "AdditiveBlendMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonRendererComponent, AdditiveBlendMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_AdditiveBlendMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_AdditiveBlendMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_NormalBlendMaterial_MetaData[] = {
		{ "Category", "Spine" },
		{ "Comment", "// Material Instance parents\n" },
		{ "ModuleRelativePath", "Public/SpineSkeletonRendererComponent.h" },
		{ "ToolTip", "Material Instance parents" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_NormalBlendMaterial = { "NormalBlendMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineSkeletonRendererComponent, NormalBlendMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_NormalBlendMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_NormalBlendMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_bCreateCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_TextureParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_DepthOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasScreenBlendMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasScreenBlendMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasMultiplyBlendMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasMultiplyBlendMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasAdditiveBlendMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasAdditiveBlendMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasNormalBlendMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_atlasNormalBlendMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_ScreenBlendMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_MultiplyBlendMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_AdditiveBlendMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::NewProp_NormalBlendMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineSkeletonRendererComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::ClassParams = {
		&USpineSkeletonRendererComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpineSkeletonRendererComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpineSkeletonRendererComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpineSkeletonRendererComponent, 4112702673);
	template<> SPINEPLUGIN_API UClass* StaticClass<USpineSkeletonRendererComponent>()
	{
		return USpineSkeletonRendererComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpineSkeletonRendererComponent(Z_Construct_UClass_USpineSkeletonRendererComponent, &USpineSkeletonRendererComponent::StaticClass, TEXT("/Script/SpinePlugin"), TEXT("USpineSkeletonRendererComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineSkeletonRendererComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
