// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpinePlugin_init() {}
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineBeforeUpdateWorldTransformDelegate__DelegateSignature();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAfterUpdateWorldTransformDelegate__DelegateSignature();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SpinePlugin()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SpinePlugin_SpineBeforeUpdateWorldTransformDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpinePlugin_SpineAfterUpdateWorldTransformDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpinePlugin_SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/SpinePlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB0BC5FD7,
				0xFB40BF54,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
