// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MStateContextFunctions.h"

#ifdef MSTATEMACHINE_MStateContextFunctions_generated_h
#error "MStateContextFunctions.generated.h already included, missing '#pragma once' in MStateContextFunctions.h"
#endif
#define MSTATEMACHINE_MStateContextFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AController;
class UObject;
struct FStateTickParameters;
struct FStateTransitionParameters;

// ********** Begin Class UMStateContextFunctions **************************************************
#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateContextFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOwnerControllerByTickParams); \
	DECLARE_FUNCTION(execGetOwnerByTickParams); \
	DECLARE_FUNCTION(execGetOwnerControllerByTransitionParams); \
	DECLARE_FUNCTION(execGetOwnerByTransitionParams);


MSTATEMACHINE_API UClass* Z_Construct_UClass_UMStateContextFunctions_NoRegister();

#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateContextFunctions_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMStateContextFunctions(); \
	friend struct Z_Construct_UClass_UMStateContextFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MSTATEMACHINE_API UClass* Z_Construct_UClass_UMStateContextFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UMStateContextFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MStateMachine"), Z_Construct_UClass_UMStateContextFunctions_NoRegister) \
	DECLARE_SERIALIZER(UMStateContextFunctions)


#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateContextFunctions_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMStateContextFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMStateContextFunctions(UMStateContextFunctions&&) = delete; \
	UMStateContextFunctions(const UMStateContextFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMStateContextFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMStateContextFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMStateContextFunctions) \
	NO_API virtual ~UMStateContextFunctions();


#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateContextFunctions_h_15_PROLOG
#define FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateContextFunctions_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateContextFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateContextFunctions_h_18_INCLASS_NO_PURE_DECLS \
	FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateContextFunctions_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMStateContextFunctions;

// ********** End Class UMStateContextFunctions ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateContextFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
