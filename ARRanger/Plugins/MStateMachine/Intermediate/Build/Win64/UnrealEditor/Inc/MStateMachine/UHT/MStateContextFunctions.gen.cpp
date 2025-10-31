// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MStateContextFunctions.h"
#include "MStateInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMStateContextFunctions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MSTATEMACHINE_API UClass* Z_Construct_UClass_UMStateContextFunctions();
MSTATEMACHINE_API UClass* Z_Construct_UClass_UMStateContextFunctions_NoRegister();
MSTATEMACHINE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTickParameters();
MSTATEMACHINE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTransitionParameters();
UPackage* Z_Construct_UPackage__Script_MStateMachine();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMStateContextFunctions Function GetOwnerByTickParams ********************
struct Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTickParams_Statics
{
	struct MStateContextFunctions_eventGetOwnerByTickParams_Parms
	{
		const UObject* WorldContextObject;
		FStateTickParameters InParameters;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State Tick|Context" },
		{ "DisplayName", "Get Owner In State Tick" },
		{ "ModuleRelativePath", "Public/MStateContextFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTickParams_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateContextFunctions_eventGetOwnerByTickParams_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTickParams_Statics::NewProp_InParameters = { "InParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateContextFunctions_eventGetOwnerByTickParams_Parms, InParameters), Z_Construct_UScriptStruct_FStateTickParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameters_MetaData), NewProp_InParameters_MetaData) }; // 2884139217
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTickParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateContextFunctions_eventGetOwnerByTickParams_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTickParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTickParams_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTickParams_Statics::NewProp_InParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTickParams_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTickParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTickParams_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMStateContextFunctions, nullptr, "GetOwnerByTickParams", Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTickParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTickParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTickParams_Statics::MStateContextFunctions_eventGetOwnerByTickParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTickParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTickParams_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTickParams_Statics::MStateContextFunctions_eventGetOwnerByTickParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTickParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTickParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMStateContextFunctions::execGetOwnerByTickParams)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FStateTickParameters,Z_Param_Out_InParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=UMStateContextFunctions::GetOwnerByTickParams(Z_Param_WorldContextObject,Z_Param_Out_InParameters);
	P_NATIVE_END;
}
// ********** End Class UMStateContextFunctions Function GetOwnerByTickParams **********************

// ********** Begin Class UMStateContextFunctions Function GetOwnerByTransitionParams **************
struct Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTransitionParams_Statics
{
	struct MStateContextFunctions_eventGetOwnerByTransitionParams_Parms
	{
		const UObject* WorldContextObject;
		FStateTransitionParameters InParameters;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State Transition|Context" },
		{ "DisplayName", "Get Owner In State Transition" },
		{ "ModuleRelativePath", "Public/MStateContextFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTransitionParams_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateContextFunctions_eventGetOwnerByTransitionParams_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTransitionParams_Statics::NewProp_InParameters = { "InParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateContextFunctions_eventGetOwnerByTransitionParams_Parms, InParameters), Z_Construct_UScriptStruct_FStateTransitionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameters_MetaData), NewProp_InParameters_MetaData) }; // 1454466069
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTransitionParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateContextFunctions_eventGetOwnerByTransitionParams_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTransitionParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTransitionParams_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTransitionParams_Statics::NewProp_InParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTransitionParams_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTransitionParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTransitionParams_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMStateContextFunctions, nullptr, "GetOwnerByTransitionParams", Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTransitionParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTransitionParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTransitionParams_Statics::MStateContextFunctions_eventGetOwnerByTransitionParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTransitionParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTransitionParams_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTransitionParams_Statics::MStateContextFunctions_eventGetOwnerByTransitionParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTransitionParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTransitionParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMStateContextFunctions::execGetOwnerByTransitionParams)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FStateTransitionParameters,Z_Param_Out_InParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=UMStateContextFunctions::GetOwnerByTransitionParams(Z_Param_WorldContextObject,Z_Param_Out_InParameters);
	P_NATIVE_END;
}
// ********** End Class UMStateContextFunctions Function GetOwnerByTransitionParams ****************

// ********** Begin Class UMStateContextFunctions Function GetOwnerControllerByTickParams **********
struct Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTickParams_Statics
{
	struct MStateContextFunctions_eventGetOwnerControllerByTickParams_Parms
	{
		const UObject* WorldContextObject;
		FStateTickParameters InParameters;
		AController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State Tick|Context" },
		{ "DisplayName", "Get Owner Controller In State Tick" },
		{ "ModuleRelativePath", "Public/MStateContextFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTickParams_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateContextFunctions_eventGetOwnerControllerByTickParams_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTickParams_Statics::NewProp_InParameters = { "InParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateContextFunctions_eventGetOwnerControllerByTickParams_Parms, InParameters), Z_Construct_UScriptStruct_FStateTickParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameters_MetaData), NewProp_InParameters_MetaData) }; // 2884139217
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTickParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateContextFunctions_eventGetOwnerControllerByTickParams_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTickParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTickParams_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTickParams_Statics::NewProp_InParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTickParams_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTickParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTickParams_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMStateContextFunctions, nullptr, "GetOwnerControllerByTickParams", Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTickParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTickParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTickParams_Statics::MStateContextFunctions_eventGetOwnerControllerByTickParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTickParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTickParams_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTickParams_Statics::MStateContextFunctions_eventGetOwnerControllerByTickParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTickParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTickParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMStateContextFunctions::execGetOwnerControllerByTickParams)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FStateTickParameters,Z_Param_Out_InParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AController**)Z_Param__Result=UMStateContextFunctions::GetOwnerControllerByTickParams(Z_Param_WorldContextObject,Z_Param_Out_InParameters);
	P_NATIVE_END;
}
// ********** End Class UMStateContextFunctions Function GetOwnerControllerByTickParams ************

// ********** Begin Class UMStateContextFunctions Function GetOwnerControllerByTransitionParams ****
struct Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTransitionParams_Statics
{
	struct MStateContextFunctions_eventGetOwnerControllerByTransitionParams_Parms
	{
		const UObject* WorldContextObject;
		FStateTransitionParameters InParameters;
		AController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State Transition|Context" },
		{ "DisplayName", "Get Owner Controller In State Transition" },
		{ "ModuleRelativePath", "Public/MStateContextFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTransitionParams_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateContextFunctions_eventGetOwnerControllerByTransitionParams_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTransitionParams_Statics::NewProp_InParameters = { "InParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateContextFunctions_eventGetOwnerControllerByTransitionParams_Parms, InParameters), Z_Construct_UScriptStruct_FStateTransitionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameters_MetaData), NewProp_InParameters_MetaData) }; // 1454466069
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTransitionParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateContextFunctions_eventGetOwnerControllerByTransitionParams_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTransitionParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTransitionParams_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTransitionParams_Statics::NewProp_InParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTransitionParams_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTransitionParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTransitionParams_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMStateContextFunctions, nullptr, "GetOwnerControllerByTransitionParams", Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTransitionParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTransitionParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTransitionParams_Statics::MStateContextFunctions_eventGetOwnerControllerByTransitionParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTransitionParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTransitionParams_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTransitionParams_Statics::MStateContextFunctions_eventGetOwnerControllerByTransitionParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTransitionParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTransitionParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMStateContextFunctions::execGetOwnerControllerByTransitionParams)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FStateTransitionParameters,Z_Param_Out_InParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AController**)Z_Param__Result=UMStateContextFunctions::GetOwnerControllerByTransitionParams(Z_Param_WorldContextObject,Z_Param_Out_InParameters);
	P_NATIVE_END;
}
// ********** End Class UMStateContextFunctions Function GetOwnerControllerByTransitionParams ******

// ********** Begin Class UMStateContextFunctions **************************************************
void UMStateContextFunctions::StaticRegisterNativesUMStateContextFunctions()
{
	UClass* Class = UMStateContextFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOwnerByTickParams", &UMStateContextFunctions::execGetOwnerByTickParams },
		{ "GetOwnerByTransitionParams", &UMStateContextFunctions::execGetOwnerByTransitionParams },
		{ "GetOwnerControllerByTickParams", &UMStateContextFunctions::execGetOwnerControllerByTickParams },
		{ "GetOwnerControllerByTransitionParams", &UMStateContextFunctions::execGetOwnerControllerByTransitionParams },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMStateContextFunctions;
UClass* UMStateContextFunctions::GetPrivateStaticClass()
{
	using TClass = UMStateContextFunctions;
	if (!Z_Registration_Info_UClass_UMStateContextFunctions.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MStateContextFunctions"),
			Z_Registration_Info_UClass_UMStateContextFunctions.InnerSingleton,
			StaticRegisterNativesUMStateContextFunctions,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMStateContextFunctions.InnerSingleton;
}
UClass* Z_Construct_UClass_UMStateContextFunctions_NoRegister()
{
	return UMStateContextFunctions::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMStateContextFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MStateContextFunctions.h" },
		{ "ModuleRelativePath", "Public/MStateContextFunctions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTickParams, "GetOwnerByTickParams" }, // 20551993
		{ &Z_Construct_UFunction_UMStateContextFunctions_GetOwnerByTransitionParams, "GetOwnerByTransitionParams" }, // 3192616941
		{ &Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTickParams, "GetOwnerControllerByTickParams" }, // 2738244776
		{ &Z_Construct_UFunction_UMStateContextFunctions_GetOwnerControllerByTransitionParams, "GetOwnerControllerByTransitionParams" }, // 2348468871
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMStateContextFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMStateContextFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MStateMachine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMStateContextFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMStateContextFunctions_Statics::ClassParams = {
	&UMStateContextFunctions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMStateContextFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UMStateContextFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMStateContextFunctions()
{
	if (!Z_Registration_Info_UClass_UMStateContextFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMStateContextFunctions.OuterSingleton, Z_Construct_UClass_UMStateContextFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMStateContextFunctions.OuterSingleton;
}
UMStateContextFunctions::UMStateContextFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMStateContextFunctions);
UMStateContextFunctions::~UMStateContextFunctions() {}
// ********** End Class UMStateContextFunctions ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateContextFunctions_h__Script_MStateMachine_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMStateContextFunctions, UMStateContextFunctions::StaticClass, TEXT("UMStateContextFunctions"), &Z_Registration_Info_UClass_UMStateContextFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMStateContextFunctions), 2772011460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateContextFunctions_h__Script_MStateMachine_3239428(TEXT("/Script/MStateMachine"),
	Z_CompiledInDeferFile_FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateContextFunctions_h__Script_MStateMachine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateContextFunctions_h__Script_MStateMachine_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
