// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MStateDefinition.h"

#ifdef MSTATEMACHINE_MStateDefinition_generated_h
#error "MStateDefinition.generated.h already included, missing '#pragma once' in MStateDefinition.h"
#endif
#define MSTATEMACHINE_MStateDefinition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMStateTagInfo ****************************************************
#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateDefinition_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMStateTagInfo_Statics; \
	MSTATEMACHINE_API static class UScriptStruct* StaticStruct();


struct FMStateTagInfo;
// ********** End ScriptStruct FMStateTagInfo ******************************************************

// ********** Begin Class UMStateDefinition ********************************************************
MSTATEMACHINE_API UClass* Z_Construct_UClass_UMStateDefinition_NoRegister();

#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateDefinition_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMStateDefinition(); \
	friend struct Z_Construct_UClass_UMStateDefinition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MSTATEMACHINE_API UClass* Z_Construct_UClass_UMStateDefinition_NoRegister(); \
public: \
	DECLARE_CLASS2(UMStateDefinition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MStateMachine"), Z_Construct_UClass_UMStateDefinition_NoRegister) \
	DECLARE_SERIALIZER(UMStateDefinition)


#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateDefinition_h_52_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMStateDefinition(UMStateDefinition&&) = delete; \
	UMStateDefinition(const UMStateDefinition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMStateDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMStateDefinition); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMStateDefinition) \
	NO_API virtual ~UMStateDefinition();


#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateDefinition_h_49_PROLOG
#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateDefinition_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateDefinition_h_52_INCLASS_NO_PURE_DECLS \
	FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateDefinition_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMStateDefinition;

// ********** End Class UMStateDefinition **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateDefinition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
