// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MStateInstance.h"

#ifdef MSTATEMACHINE_MStateInstance_generated_h
#error "MStateInstance.generated.h already included, missing '#pragma once' in MStateInstance.h"
#endif
#define MSTATEMACHINE_MStateInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStateTransitionParameters ****************************************
#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateInstance_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTransitionParameters_Statics; \
	MSTATEMACHINE_API static class UScriptStruct* StaticStruct();


struct FStateTransitionParameters;
// ********** End ScriptStruct FStateTransitionParameters ******************************************

// ********** Begin ScriptStruct FStateTickParameters **********************************************
#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateInstance_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTickParameters_Statics; \
	MSTATEMACHINE_API static class UScriptStruct* StaticStruct();


struct FStateTickParameters;
// ********** End ScriptStruct FStateTickParameters ************************************************

// ********** Begin Class UMStateInstance **********************************************************
MSTATEMACHINE_API UClass* Z_Construct_UClass_UMStateInstance_NoRegister();

#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateInstance_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMStateInstance(); \
	friend struct Z_Construct_UClass_UMStateInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MSTATEMACHINE_API UClass* Z_Construct_UClass_UMStateInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UMStateInstance, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MStateMachine"), Z_Construct_UClass_UMStateInstance_NoRegister) \
	DECLARE_SERIALIZER(UMStateInstance)


#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateInstance_h_108_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMStateInstance(UMStateInstance&&) = delete; \
	UMStateInstance(const UMStateInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MSTATEMACHINE_API, UMStateInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMStateInstance); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMStateInstance) \
	MSTATEMACHINE_API virtual ~UMStateInstance();


#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateInstance_h_105_PROLOG
#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateInstance_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateInstance_h_108_INCLASS_NO_PURE_DECLS \
	FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateInstance_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMStateInstance;

// ********** End Class UMStateInstance ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateInstance_h

// ********** Begin Enum EStateTransitionType ******************************************************
#define FOREACH_ENUM_ESTATETRANSITIONTYPE(op) \
	op(EStateTransitionType::Enter) \
	op(EStateTransitionType::Exit) 

enum class EStateTransitionType : uint8;
template<> struct TIsUEnumClass<EStateTransitionType> { enum { Value = true }; };
template<> MSTATEMACHINE_API UEnum* StaticEnum<EStateTransitionType>();
// ********** End Enum EStateTransitionType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
