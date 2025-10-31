// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MDMeshCaptureComponent.h"

#ifdef MOTIONDIFF_MDMeshCaptureComponent_generated_h
#error "MDMeshCaptureComponent.generated.h already included, missing '#pragma once' in MDMeshCaptureComponent.h"
#endif
#define MOTIONDIFF_MDMeshCaptureComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMDMeshCapture_ElapseModeParameter ********************************
#define FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureComponent_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMDMeshCapture_ElapseModeParameter_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMDMeshCapture_ElapseModeParameter;
// ********** End ScriptStruct FMDMeshCapture_ElapseModeParameter **********************************

// ********** Begin ScriptStruct FMDMeshCaptureParameters ******************************************
#define FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureComponent_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMDMeshCaptureParameters;
// ********** End ScriptStruct FMDMeshCaptureParameters ********************************************

// ********** Begin Class UMDMeshCaptureComponent **************************************************
MOTIONDIFF_API UClass* Z_Construct_UClass_UMDMeshCaptureComponent_NoRegister();

#define FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureComponent_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMDMeshCaptureComponent(); \
	friend struct Z_Construct_UClass_UMDMeshCaptureComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOTIONDIFF_API UClass* Z_Construct_UClass_UMDMeshCaptureComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMDMeshCaptureComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotionDiff"), Z_Construct_UClass_UMDMeshCaptureComponent_NoRegister) \
	DECLARE_SERIALIZER(UMDMeshCaptureComponent)


#define FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureComponent_h_84_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMDMeshCaptureComponent(UMDMeshCaptureComponent&&) = delete; \
	UMDMeshCaptureComponent(const UMDMeshCaptureComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMDMeshCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMDMeshCaptureComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMDMeshCaptureComponent) \
	NO_API virtual ~UMDMeshCaptureComponent();


#define FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureComponent_h_81_PROLOG
#define FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureComponent_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureComponent_h_84_INCLASS_NO_PURE_DECLS \
	FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureComponent_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMDMeshCaptureComponent;

// ********** End Class UMDMeshCaptureComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureComponent_h

// ********** Begin Enum EMDMeshCaptureDestroyMode *************************************************
#define FOREACH_ENUM_EMDMESHCAPTUREDESTROYMODE(op) \
	op(EMDMeshCaptureDestroyMode::None) \
	op(EMDMeshCaptureDestroyMode::ElapsedTime) 

enum class EMDMeshCaptureDestroyMode : uint8;
template<> struct TIsUEnumClass<EMDMeshCaptureDestroyMode> { enum { Value = true }; };
template<> MOTIONDIFF_API UEnum* StaticEnum<EMDMeshCaptureDestroyMode>();
// ********** End Enum EMDMeshCaptureDestroyMode ***************************************************

// ********** Begin Enum EMDMeshCaptureShutterMode *************************************************
#define FOREACH_ENUM_EMDMESHCAPTURESHUTTERMODE(op) \
	op(EMDMeshCaptureShutterMode::Default) \
	op(EMDMeshCaptureShutterMode::IntervalBase) 

enum class EMDMeshCaptureShutterMode : uint8;
template<> struct TIsUEnumClass<EMDMeshCaptureShutterMode> { enum { Value = true }; };
template<> MOTIONDIFF_API UEnum* StaticEnum<EMDMeshCaptureShutterMode>();
// ********** End Enum EMDMeshCaptureShutterMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
