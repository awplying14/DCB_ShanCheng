// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USpineSkeletonComponent;
struct FVector;
struct FTransform;
#ifdef SPINEPLUGIN_SpineSkeletonComponent_generated_h
#error "SpineSkeletonComponent.generated.h already included, missing '#pragma once' in SpineSkeletonComponent.h"
#endif
#define SPINEPLUGIN_SpineSkeletonComponent_generated_h

#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_40_DELEGATE \
struct _Script_SpinePlugin_eventSpineAfterUpdateWorldTransformDelegate_Parms \
{ \
	USpineSkeletonComponent* skeleton; \
}; \
static inline void FSpineAfterUpdateWorldTransformDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAfterUpdateWorldTransformDelegate, USpineSkeletonComponent* skeleton) \
{ \
	_Script_SpinePlugin_eventSpineAfterUpdateWorldTransformDelegate_Parms Parms; \
	Parms.skeleton=skeleton; \
	SpineAfterUpdateWorldTransformDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_39_DELEGATE \
struct _Script_SpinePlugin_eventSpineBeforeUpdateWorldTransformDelegate_Parms \
{ \
	USpineSkeletonComponent* skeleton; \
}; \
static inline void FSpineBeforeUpdateWorldTransformDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineBeforeUpdateWorldTransformDelegate, USpineSkeletonComponent* skeleton) \
{ \
	_Script_SpinePlugin_eventSpineBeforeUpdateWorldTransformDelegate_Parms Parms; \
	Parms.skeleton=skeleton; \
	SpineBeforeUpdateWorldTransformDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_SPARSE_DATA
#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAnimationDuration); \
	DECLARE_FUNCTION(execHasAnimation); \
	DECLARE_FUNCTION(execGetAnimations); \
	DECLARE_FUNCTION(execHasSlot); \
	DECLARE_FUNCTION(execGetSlots); \
	DECLARE_FUNCTION(execHasBone); \
	DECLARE_FUNCTION(execGetBones); \
	DECLARE_FUNCTION(execGetScaleY); \
	DECLARE_FUNCTION(execSetScaleY); \
	DECLARE_FUNCTION(execGetScaleX); \
	DECLARE_FUNCTION(execSetScaleX); \
	DECLARE_FUNCTION(execSetSlotsToSetupPose); \
	DECLARE_FUNCTION(execSetBonesToSetupPose); \
	DECLARE_FUNCTION(execSetToSetupPose); \
	DECLARE_FUNCTION(execUpdateWorldTransform); \
	DECLARE_FUNCTION(execSetBoneWorldPosition); \
	DECLARE_FUNCTION(execGetBoneWorldTransform); \
	DECLARE_FUNCTION(execSetAttachment); \
	DECLARE_FUNCTION(execHasSkin); \
	DECLARE_FUNCTION(execSetSkin); \
	DECLARE_FUNCTION(execSetSkins); \
	DECLARE_FUNCTION(execGetSkins);


#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnimationDuration); \
	DECLARE_FUNCTION(execHasAnimation); \
	DECLARE_FUNCTION(execGetAnimations); \
	DECLARE_FUNCTION(execHasSlot); \
	DECLARE_FUNCTION(execGetSlots); \
	DECLARE_FUNCTION(execHasBone); \
	DECLARE_FUNCTION(execGetBones); \
	DECLARE_FUNCTION(execGetScaleY); \
	DECLARE_FUNCTION(execSetScaleY); \
	DECLARE_FUNCTION(execGetScaleX); \
	DECLARE_FUNCTION(execSetScaleX); \
	DECLARE_FUNCTION(execSetSlotsToSetupPose); \
	DECLARE_FUNCTION(execSetBonesToSetupPose); \
	DECLARE_FUNCTION(execSetToSetupPose); \
	DECLARE_FUNCTION(execUpdateWorldTransform); \
	DECLARE_FUNCTION(execSetBoneWorldPosition); \
	DECLARE_FUNCTION(execGetBoneWorldTransform); \
	DECLARE_FUNCTION(execSetAttachment); \
	DECLARE_FUNCTION(execHasSkin); \
	DECLARE_FUNCTION(execSetSkin); \
	DECLARE_FUNCTION(execSetSkins); \
	DECLARE_FUNCTION(execGetSkins);


#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpineSkeletonComponent(); \
	friend struct Z_Construct_UClass_USpineSkeletonComponent_Statics; \
public: \
	DECLARE_CLASS(USpineSkeletonComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineSkeletonComponent)


#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUSpineSkeletonComponent(); \
	friend struct Z_Construct_UClass_USpineSkeletonComponent_Statics; \
public: \
	DECLARE_CLASS(USpineSkeletonComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineSkeletonComponent)


#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpineSkeletonComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpineSkeletonComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineSkeletonComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineSkeletonComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineSkeletonComponent(USpineSkeletonComponent&&); \
	NO_API USpineSkeletonComponent(const USpineSkeletonComponent&); \
public:


#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineSkeletonComponent(USpineSkeletonComponent&&); \
	NO_API USpineSkeletonComponent(const USpineSkeletonComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineSkeletonComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineSkeletonComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpineSkeletonComponent)


#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_PRIVATE_PROPERTY_OFFSET
#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_43_PROLOG
#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_PRIVATE_PROPERTY_OFFSET \
	ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_SPARSE_DATA \
	ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_RPC_WRAPPERS \
	ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_INCLASS \
	ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_PRIVATE_PROPERTY_OFFSET \
	ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_SPARSE_DATA \
	ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_INCLASS_NO_PURE_DECLS \
	ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPINEPLUGIN_API UClass* StaticClass<class USpineSkeletonComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
