// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USpineWidget;
class UTrackEntry;
#ifdef SPINEPLUGIN_SpineWidget_generated_h
#error "SpineWidget.generated.h already included, missing '#pragma once' in SpineWidget.h"
#endif
#define SPINEPLUGIN_SpineWidget_generated_h

#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_41_DELEGATE \
struct _Script_SpinePlugin_eventSpineWidgetAfterUpdateWorldTransformDelegate_Parms \
{ \
	USpineWidget* skeleton; \
}; \
static inline void FSpineWidgetAfterUpdateWorldTransformDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineWidgetAfterUpdateWorldTransformDelegate, USpineWidget* skeleton) \
{ \
	_Script_SpinePlugin_eventSpineWidgetAfterUpdateWorldTransformDelegate_Parms Parms; \
	Parms.skeleton=skeleton; \
	SpineWidgetAfterUpdateWorldTransformDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_40_DELEGATE \
struct _Script_SpinePlugin_eventSpineWidgetBeforeUpdateWorldTransformDelegate_Parms \
{ \
	USpineWidget* skeleton; \
}; \
static inline void FSpineWidgetBeforeUpdateWorldTransformDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineWidgetBeforeUpdateWorldTransformDelegate, USpineWidget* skeleton) \
{ \
	_Script_SpinePlugin_eventSpineWidgetBeforeUpdateWorldTransformDelegate_Parms Parms; \
	Parms.skeleton=skeleton; \
	SpineWidgetBeforeUpdateWorldTransformDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_SPARSE_DATA
#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTick); \
	DECLARE_FUNCTION(execClearTrack); \
	DECLARE_FUNCTION(execClearTracks); \
	DECLARE_FUNCTION(execGetCurrent); \
	DECLARE_FUNCTION(execAddEmptyAnimation); \
	DECLARE_FUNCTION(execSetEmptyAnimation); \
	DECLARE_FUNCTION(execAddAnimation); \
	DECLARE_FUNCTION(execSetAnimation); \
	DECLARE_FUNCTION(execGetTimeScale); \
	DECLARE_FUNCTION(execSetTimeScale); \
	DECLARE_FUNCTION(execSetPlaybackTime); \
	DECLARE_FUNCTION(execSetAutoPlay); \
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
	DECLARE_FUNCTION(execSetAttachment); \
	DECLARE_FUNCTION(execHasSkin); \
	DECLARE_FUNCTION(execSetSkins); \
	DECLARE_FUNCTION(execSetSkin); \
	DECLARE_FUNCTION(execGetSkins);


#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTick); \
	DECLARE_FUNCTION(execClearTrack); \
	DECLARE_FUNCTION(execClearTracks); \
	DECLARE_FUNCTION(execGetCurrent); \
	DECLARE_FUNCTION(execAddEmptyAnimation); \
	DECLARE_FUNCTION(execSetEmptyAnimation); \
	DECLARE_FUNCTION(execAddAnimation); \
	DECLARE_FUNCTION(execSetAnimation); \
	DECLARE_FUNCTION(execGetTimeScale); \
	DECLARE_FUNCTION(execSetTimeScale); \
	DECLARE_FUNCTION(execSetPlaybackTime); \
	DECLARE_FUNCTION(execSetAutoPlay); \
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
	DECLARE_FUNCTION(execSetAttachment); \
	DECLARE_FUNCTION(execHasSkin); \
	DECLARE_FUNCTION(execSetSkins); \
	DECLARE_FUNCTION(execSetSkin); \
	DECLARE_FUNCTION(execGetSkins);


#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpineWidget(); \
	friend struct Z_Construct_UClass_USpineWidget_Statics; \
public: \
	DECLARE_CLASS(USpineWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineWidget)


#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUSpineWidget(); \
	friend struct Z_Construct_UClass_USpineWidget_Statics; \
public: \
	DECLARE_CLASS(USpineWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineWidget)


#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpineWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpineWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineWidget(USpineWidget&&); \
	NO_API USpineWidget(const USpineWidget&); \
public:


#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpineWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineWidget(USpineWidget&&); \
	NO_API USpineWidget(const USpineWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpineWidget)


#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__atlasNormalBlendMaterials() { return STRUCT_OFFSET(USpineWidget, atlasNormalBlendMaterials); } \
	FORCEINLINE static uint32 __PPO__atlasAdditiveBlendMaterials() { return STRUCT_OFFSET(USpineWidget, atlasAdditiveBlendMaterials); } \
	FORCEINLINE static uint32 __PPO__atlasMultiplyBlendMaterials() { return STRUCT_OFFSET(USpineWidget, atlasMultiplyBlendMaterials); } \
	FORCEINLINE static uint32 __PPO__atlasScreenBlendMaterials() { return STRUCT_OFFSET(USpineWidget, atlasScreenBlendMaterials); } \
	FORCEINLINE static uint32 __PPO__trackEntries() { return STRUCT_OFFSET(USpineWidget, trackEntries); } \
	FORCEINLINE static uint32 __PPO__bAutoPlaying() { return STRUCT_OFFSET(USpineWidget, bAutoPlaying); }


#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_43_PROLOG
#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_PRIVATE_PROPERTY_OFFSET \
	ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_SPARSE_DATA \
	ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_RPC_WRAPPERS \
	ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_INCLASS \
	ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_PRIVATE_PROPERTY_OFFSET \
	ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_SPARSE_DATA \
	ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_INCLASS_NO_PURE_DECLS \
	ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h_45_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SpineWidget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPINEPLUGIN_API UClass* StaticClass<class USpineWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShanCheng_Game_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
