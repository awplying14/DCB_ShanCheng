// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpinePlugin/Public/SpineBoneDriverComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineBoneDriverComponent() {}
// Cross Module References
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineBoneDriverComponent_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineBoneDriverComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_SpinePlugin();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USpineBoneDriverComponent::execBeforeUpdateWorldTransform)
	{
		P_GET_OBJECT(USpineSkeletonComponent,Z_Param_skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeforeUpdateWorldTransform(Z_Param_skeleton);
		P_NATIVE_END;
	}
	void USpineBoneDriverComponent::StaticRegisterNativesUSpineBoneDriverComponent()
	{
		UClass* Class = USpineBoneDriverComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeforeUpdateWorldTransform", &USpineBoneDriverComponent::execBeforeUpdateWorldTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics
	{
		struct SpineBoneDriverComponent_eventBeforeUpdateWorldTransform_Parms
		{
			USpineSkeletonComponent* skeleton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::NewProp_skeleton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::NewProp_skeleton = { "skeleton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpineBoneDriverComponent_eventBeforeUpdateWorldTransform_Parms, skeleton), Z_Construct_UClass_USpineSkeletonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::NewProp_skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::NewProp_skeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::NewProp_skeleton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineBoneDriverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineBoneDriverComponent, nullptr, "BeforeUpdateWorldTransform", nullptr, nullptr, sizeof(SpineBoneDriverComponent_eventBeforeUpdateWorldTransform_Parms), Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpineBoneDriverComponent_NoRegister()
	{
		return USpineBoneDriverComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpineBoneDriverComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseScale_MetaData[];
#endif
		static void NewProp_UseScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseRotation_MetaData[];
#endif
		static void NewProp_UseRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsePosition_MetaData[];
#endif
		static void NewProp_UsePosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseComponentTransform_MetaData[];
#endif
		static void NewProp_UseComponentTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseComponentTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineBoneDriverComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpinePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpineBoneDriverComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform, "BeforeUpdateWorldTransform" }, // 1111589842
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneDriverComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SpineBoneDriverComponent.h" },
		{ "ModuleRelativePath", "Public/SpineBoneDriverComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseScale_MetaData[] = {
		{ "Category", "SpineBoneDriverComponent" },
		{ "ModuleRelativePath", "Public/SpineBoneDriverComponent.h" },
	};
#endif
	void Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseScale_SetBit(void* Obj)
	{
		((USpineBoneDriverComponent*)Obj)->UseScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseScale = { "UseScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpineBoneDriverComponent), &Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseRotation_MetaData[] = {
		{ "Category", "SpineBoneDriverComponent" },
		{ "ModuleRelativePath", "Public/SpineBoneDriverComponent.h" },
	};
#endif
	void Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseRotation_SetBit(void* Obj)
	{
		((USpineBoneDriverComponent*)Obj)->UseRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseRotation = { "UseRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpineBoneDriverComponent), &Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UsePosition_MetaData[] = {
		{ "Category", "SpineBoneDriverComponent" },
		{ "ModuleRelativePath", "Public/SpineBoneDriverComponent.h" },
	};
#endif
	void Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UsePosition_SetBit(void* Obj)
	{
		((USpineBoneDriverComponent*)Obj)->UsePosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UsePosition = { "UsePosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpineBoneDriverComponent), &Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UsePosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UsePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UsePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseComponentTransform_MetaData[] = {
		{ "Category", "SpineBoneDriverComponent" },
		{ "Comment", "//Uses just this component when set to true. Updates owning actor otherwise.\n" },
		{ "ModuleRelativePath", "Public/SpineBoneDriverComponent.h" },
		{ "ToolTip", "Uses just this component when set to true. Updates owning actor otherwise." },
	};
#endif
	void Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseComponentTransform_SetBit(void* Obj)
	{
		((USpineBoneDriverComponent*)Obj)->UseComponentTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseComponentTransform = { "UseComponentTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpineBoneDriverComponent), &Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseComponentTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseComponentTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseComponentTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "SpineBoneDriverComponent" },
		{ "ModuleRelativePath", "Public/SpineBoneDriverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineBoneDriverComponent, BoneName), METADATA_PARAMS(Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "SpineBoneDriverComponent" },
		{ "ModuleRelativePath", "Public/SpineBoneDriverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpineBoneDriverComponent, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpineBoneDriverComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UsePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseComponentTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_Target,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineBoneDriverComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineBoneDriverComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpineBoneDriverComponent_Statics::ClassParams = {
		&USpineBoneDriverComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpineBoneDriverComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneDriverComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpineBoneDriverComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneDriverComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpineBoneDriverComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpineBoneDriverComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpineBoneDriverComponent, 556933706);
	template<> SPINEPLUGIN_API UClass* StaticClass<USpineBoneDriverComponent>()
	{
		return USpineBoneDriverComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpineBoneDriverComponent(Z_Construct_UClass_USpineBoneDriverComponent, &USpineBoneDriverComponent::StaticClass, TEXT("/Script/SpinePlugin"), TEXT("USpineBoneDriverComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineBoneDriverComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
