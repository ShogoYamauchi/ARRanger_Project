// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MBlueprintStateInstance.h"

#ifdef MSTATEMACHINE_MBlueprintStateInstance_generated_h
#error "MBlueprintStateInstance.generated.h already included, missing '#pragma once' in MBlueprintStateInstance.h"
#endif
#define MSTATEMACHINE_MBlueprintStateInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FStateTickParameters;
struct FStateTransitionParameters;

// ********** Begin Class UMBlueprintStateInstance *************************************************
#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MBlueprintStateInstance_h_17_CALLBACK_WRAPPERS
MSTATEMACHINE_API UClass* Z_Construct_UClass_UMBlueprintStateInstance_NoRegister();

#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MBlueprintStateInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMBlueprintStateInstance(); \
	friend struct Z_Construct_UClass_UMBlueprintStateInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MSTATEMACHINE_API UClass* Z_Construct_UClass_UMBlueprintStateInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UMBlueprintStateInstance, UMStateInstance, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MStateMachine"), Z_Construct_UClass_UMBlueprintStateInstance_NoRegister) \
	DECLARE_SERIALIZER(UMBlueprintStateInstance)


#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MBlueprintStateInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMBlueprintStateInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMBlueprintStateInstance(UMBlueprintStateInstance&&) = delete; \
	UMBlueprintStateInstance(const UMBlueprintStateInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMBlueprintStateInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMBlueprintStateInstance); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMBlueprintStateInstance) \
	NO_API virtual ~UMBlueprintStateInstance();


#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MBlueprintStateInstance_h_14_PROLOG
#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MBlueprintStateInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MBlueprintStateInstance_h_17_CALLBACK_WRAPPERS \
	FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MBlueprintStateInstance_h_17_INCLASS_NO_PURE_DECLS \
	FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MBlueprintStateInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMBlueprintStateInstance;

// ********** End Class UMBlueprintStateInstance ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MBlueprintStateInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
