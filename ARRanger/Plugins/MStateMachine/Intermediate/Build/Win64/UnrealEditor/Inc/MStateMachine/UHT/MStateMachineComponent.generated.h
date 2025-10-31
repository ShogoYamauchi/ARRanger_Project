// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MStateMachineComponent.h"

#ifdef MSTATEMACHINE_MStateMachineComponent_generated_h
#error "MStateMachineComponent.generated.h already included, missing '#pragma once' in MStateMachineComponent.h"
#endif
#define MSTATEMACHINE_MStateMachineComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMStateDefinition;
class UMStateInstance;
struct FGameplayTag;
struct FMStateHandle;

// ********** Begin ScriptStruct FMStateHandle *****************************************************
#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateMachineComponent_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMStateHandle_Statics; \
	MSTATEMACHINE_API static class UScriptStruct* StaticStruct();


struct FMStateHandle;
// ********** End ScriptStruct FMStateHandle *******************************************************

// ********** Begin ScriptStruct FMStateMachineStateListEntry **************************************
#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateMachineComponent_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMStateMachineStateListEntry_Statics; \
	MSTATEMACHINE_API static class UScriptStruct* StaticStruct();


struct FMStateMachineStateListEntry;
// ********** End ScriptStruct FMStateMachineStateListEntry ****************************************

// ********** Begin ScriptStruct FMStateMachineStateList *******************************************
#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateMachineComponent_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMStateMachineStateList_Statics; \
	MSTATEMACHINE_API static class UScriptStruct* StaticStruct();


struct FMStateMachineStateList;
// ********** End ScriptStruct FMStateMachineStateList *********************************************

// ********** Begin Class UMStateMachineComponent **************************************************
#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateMachineComponent_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStateTagByInstance); \
	DECLARE_FUNCTION(execGetCurrentStateTag); \
	DECLARE_FUNCTION(execCanSwitchToNext); \
	DECLARE_FUNCTION(execContainsStateTag); \
	DECLARE_FUNCTION(execSwitchNextState); \
	DECLARE_FUNCTION(execRemoveState); \
	DECLARE_FUNCTION(execAddStates); \
	DECLARE_FUNCTION(execAddNewState); \
	DECLARE_FUNCTION(execSetEntryState); \
	DECLARE_FUNCTION(execStopTickState); \
	DECLARE_FUNCTION(execStartTickState);


MSTATEMACHINE_API UClass* Z_Construct_UClass_UMStateMachineComponent_NoRegister();

#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateMachineComponent_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMStateMachineComponent(); \
	friend struct Z_Construct_UClass_UMStateMachineComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MSTATEMACHINE_API UClass* Z_Construct_UClass_UMStateMachineComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMStateMachineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MStateMachine"), Z_Construct_UClass_UMStateMachineComponent_NoRegister) \
	DECLARE_SERIALIZER(UMStateMachineComponent)


#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateMachineComponent_h_182_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMStateMachineComponent(UMStateMachineComponent&&) = delete; \
	UMStateMachineComponent(const UMStateMachineComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMStateMachineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMStateMachineComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMStateMachineComponent) \
	NO_API virtual ~UMStateMachineComponent();


#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateMachineComponent_h_179_PROLOG
#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateMachineComponent_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateMachineComponent_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateMachineComponent_h_182_INCLASS_NO_PURE_DECLS \
	FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateMachineComponent_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMStateMachineComponent;

// ********** End Class UMStateMachineComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateMachineComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
