// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MStateMachineComponent.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMStateMachineComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MSTATEMACHINE_API UClass* Z_Construct_UClass_UMStateDefinition_NoRegister();
MSTATEMACHINE_API UClass* Z_Construct_UClass_UMStateInstance_NoRegister();
MSTATEMACHINE_API UClass* Z_Construct_UClass_UMStateMachineComponent();
MSTATEMACHINE_API UClass* Z_Construct_UClass_UMStateMachineComponent_NoRegister();
MSTATEMACHINE_API UScriptStruct* Z_Construct_UScriptStruct_FMStateHandle();
MSTATEMACHINE_API UScriptStruct* Z_Construct_UScriptStruct_FMStateMachineStateList();
MSTATEMACHINE_API UScriptStruct* Z_Construct_UScriptStruct_FMStateMachineStateListEntry();
UPackage* Z_Construct_UPackage__Script_MStateMachine();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMStateHandle *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMStateHandle;
class UScriptStruct* FMStateHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMStateHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMStateHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMStateHandle, (UObject*)Z_Construct_UPackage__Script_MStateMachine(), TEXT("MStateHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FMStateHandle.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMStateHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x83\x8f\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xab\n */" },
#endif
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x83\x8f\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xab" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMStateHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMStateHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MStateMachine,
	nullptr,
	&NewStructOps,
	"MStateHandle",
	nullptr,
	0,
	sizeof(FMStateHandle),
	alignof(FMStateHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMStateHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMStateHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMStateHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FMStateHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMStateHandle.InnerSingleton, Z_Construct_UScriptStruct_FMStateHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMStateHandle.InnerSingleton;
}
// ********** End ScriptStruct FMStateHandle *******************************************************

// ********** Begin ScriptStruct FMStateMachineStateListEntry **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMStateMachineStateListEntry;
class UScriptStruct* FMStateMachineStateListEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMStateMachineStateListEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMStateMachineStateListEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMStateMachineStateListEntry, (UObject*)Z_Construct_UPackage__Script_MStateMachine(), TEXT("MStateMachineStateListEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FMStateMachineStateListEntry.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMStateMachineStateListEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x82\xb9\xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x88\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\n */" },
#endif
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x82\xb9\xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x88\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x82\xb9 */" },
#endif
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x82\xb9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateDefinition_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe5\xae\x9a\xe7\xbe\xa9\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88 */" },
#endif
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe5\xae\x9a\xe7\xbe\xa9\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_State;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateDefinition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMStateMachineStateListEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMStateMachineStateListEntry_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMStateMachineStateListEntry, State), Z_Construct_UClass_UMStateInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMStateMachineStateListEntry_Statics::NewProp_StateDefinition = { "StateDefinition", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMStateMachineStateListEntry, StateDefinition), Z_Construct_UClass_UMStateDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateDefinition_MetaData), NewProp_StateDefinition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMStateMachineStateListEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMStateMachineStateListEntry_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMStateMachineStateListEntry_Statics::NewProp_StateDefinition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMStateMachineStateListEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMStateMachineStateListEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MStateMachine,
	nullptr,
	&NewStructOps,
	"MStateMachineStateListEntry",
	Z_Construct_UScriptStruct_FMStateMachineStateListEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMStateMachineStateListEntry_Statics::PropPointers),
	sizeof(FMStateMachineStateListEntry),
	alignof(FMStateMachineStateListEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMStateMachineStateListEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMStateMachineStateListEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMStateMachineStateListEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FMStateMachineStateListEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMStateMachineStateListEntry.InnerSingleton, Z_Construct_UScriptStruct_FMStateMachineStateListEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMStateMachineStateListEntry.InnerSingleton;
}
// ********** End ScriptStruct FMStateMachineStateListEntry ****************************************

// ********** Begin ScriptStruct FMStateMachineStateList *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMStateMachineStateList;
class UScriptStruct* FMStateMachineStateList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMStateMachineStateList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMStateMachineStateList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMStateMachineStateList, (UObject*)Z_Construct_UPackage__Script_MStateMachine(), TEXT("MStateMachineStateList"));
	}
	return Z_Registration_Info_UScriptStruct_FMStateMachineStateList.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMStateMachineStateList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x82\xb9\xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x88\n */" },
#endif
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x82\xb9\xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x88" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xa8\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xaa\xe3\x83\xbc\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x86\xe3\x83\x8a\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xa8\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xaa\xe3\x83\xbc\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x86\xe3\x83\x8a" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMStateMachineStateList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMStateMachineStateList_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMStateMachineStateListEntry, METADATA_PARAMS(0, nullptr) }; // 3628978584
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMStateMachineStateList_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMStateMachineStateList, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 3628978584
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMStateMachineStateList_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMStateMachineStateList, OwnerComponent), Z_Construct_UClass_UMStateMachineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerComponent_MetaData), NewProp_OwnerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMStateMachineStateList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMStateMachineStateList_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMStateMachineStateList_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMStateMachineStateList_Statics::NewProp_OwnerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMStateMachineStateList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMStateMachineStateList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MStateMachine,
	nullptr,
	&NewStructOps,
	"MStateMachineStateList",
	Z_Construct_UScriptStruct_FMStateMachineStateList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMStateMachineStateList_Statics::PropPointers),
	sizeof(FMStateMachineStateList),
	alignof(FMStateMachineStateList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMStateMachineStateList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMStateMachineStateList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMStateMachineStateList()
{
	if (!Z_Registration_Info_UScriptStruct_FMStateMachineStateList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMStateMachineStateList.InnerSingleton, Z_Construct_UScriptStruct_FMStateMachineStateList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMStateMachineStateList.InnerSingleton;
}
// ********** End ScriptStruct FMStateMachineStateList *********************************************

// ********** Begin Class UMStateMachineComponent Function AddNewState *****************************
struct Z_Construct_UFunction_UMStateMachineComponent_AddNewState_Statics
{
	struct MStateMachineComponent_eventAddNewState_Parms
	{
		TSubclassOf<UMStateDefinition> StateDefClass;
		FMStateHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MStateMachine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief \xe6\x96\xb0\xe3\x81\x97\xe3\x81\x84\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe8\xbf\xbd\xe5\x8a\xa0\xe3\x81\x99\xe3\x82\x8b\n   * \n   * @param StateDefClass \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe5\xae\x9a\xe7\xbe\xa9\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xaeUClass\n   * \n   * @return \xe8\xbf\xbd\xe5\x8a\xa0\xe6\x88\x90\xe5\x8a\x9f\xe3\x81\x97\xe3\x81\x9f\xe3\x82\x89\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xaa\xe3\x83\x8f\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xab\xe3\x80\x81\xe3\x81\x9d\xe3\x82\x8c\xe4\xbb\xa5\xe5\xa4\x96\xe3\x81\xaf\xe7\x84\xa1\xe5\x8a\xb9\xe3\x81\xaa\xe3\x83\x8f\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xab\n   */" },
#endif
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief \xe6\x96\xb0\xe3\x81\x97\xe3\x81\x84\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe8\xbf\xbd\xe5\x8a\xa0\xe3\x81\x99\xe3\x82\x8b\n\n@param StateDefClass \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe5\xae\x9a\xe7\xbe\xa9\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xaeUClass\n\n@return \xe8\xbf\xbd\xe5\x8a\xa0\xe6\x88\x90\xe5\x8a\x9f\xe3\x81\x97\xe3\x81\x9f\xe3\x82\x89\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xaa\xe3\x83\x8f\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xab\xe3\x80\x81\xe3\x81\x9d\xe3\x82\x8c\xe4\xbb\xa5\xe5\xa4\x96\xe3\x81\xaf\xe7\x84\xa1\xe5\x8a\xb9\xe3\x81\xaa\xe3\x83\x8f\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xab" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_StateDefClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMStateMachineComponent_AddNewState_Statics::NewProp_StateDefClass = { "StateDefClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateMachineComponent_eventAddNewState_Parms, StateDefClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMStateDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMStateMachineComponent_AddNewState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateMachineComponent_eventAddNewState_Parms, ReturnValue), Z_Construct_UScriptStruct_FMStateHandle, METADATA_PARAMS(0, nullptr) }; // 457264434
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMStateMachineComponent_AddNewState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateMachineComponent_AddNewState_Statics::NewProp_StateDefClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateMachineComponent_AddNewState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_AddNewState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMStateMachineComponent_AddNewState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMStateMachineComponent, nullptr, "AddNewState", Z_Construct_UFunction_UMStateMachineComponent_AddNewState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_AddNewState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMStateMachineComponent_AddNewState_Statics::MStateMachineComponent_eventAddNewState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_AddNewState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMStateMachineComponent_AddNewState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMStateMachineComponent_AddNewState_Statics::MStateMachineComponent_eventAddNewState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMStateMachineComponent_AddNewState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMStateMachineComponent_AddNewState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMStateMachineComponent::execAddNewState)
{
	P_GET_OBJECT(UClass,Z_Param_StateDefClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMStateHandle*)Z_Param__Result=P_THIS->AddNewState(Z_Param_StateDefClass);
	P_NATIVE_END;
}
// ********** End Class UMStateMachineComponent Function AddNewState *******************************

// ********** Begin Class UMStateMachineComponent Function AddStates *******************************
struct Z_Construct_UFunction_UMStateMachineComponent_AddStates_Statics
{
	struct MStateMachineComponent_eventAddStates_Parms
	{
		TArray<TSubclassOf<UMStateDefinition>> StateDefClasses;
		TArray<FMStateHandle> OutHandles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MStateMachine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief \xe8\xa4\x87\xe6\x95\xb0\xe3\x81\xae\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe8\xbf\xbd\xe5\x8a\xa0\xe3\x81\x99\xe3\x82\x8b\n   * \n   * @param StateDefClasses \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe5\xae\x9a\xe7\xbe\xa9\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xaeUClass\xe9\x85\x8d\xe5\x88\x97\n   * @param OutHandles  \xe3\x80\x80  \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x83\x8f\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xab\xe9\x85\x8d\xe5\x88\x97(\xe3\x83\x8f\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xab\xe3\x81\xae\xe9\xa0\x86\xe7\x95\xaa\xe3\x81\xaf""Definition\xe3\x81\xae\xe9\xa0\x86\xe7\x95\xaa\xe3\x81\xa8\xe5\x90\x8c\xe3\x81\x98)\n   */" },
#endif
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief \xe8\xa4\x87\xe6\x95\xb0\xe3\x81\xae\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe8\xbf\xbd\xe5\x8a\xa0\xe3\x81\x99\xe3\x82\x8b\n\n@param StateDefClasses \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe5\xae\x9a\xe7\xbe\xa9\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xaeUClass\xe9\x85\x8d\xe5\x88\x97\n@param OutHandles  \xe3\x80\x80  \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x83\x8f\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xab\xe9\x85\x8d\xe5\x88\x97(\xe3\x83\x8f\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xab\xe3\x81\xae\xe9\xa0\x86\xe7\x95\xaa\xe3\x81\xaf""Definition\xe3\x81\xae\xe9\xa0\x86\xe7\x95\xaa\xe3\x81\xa8\xe5\x90\x8c\xe3\x81\x98)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateDefClasses_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_StateDefClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StateDefClasses;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMStateMachineComponent_AddStates_Statics::NewProp_StateDefClasses_Inner = { "StateDefClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UMStateDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMStateMachineComponent_AddStates_Statics::NewProp_StateDefClasses = { "StateDefClasses", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateMachineComponent_eventAddStates_Parms, StateDefClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateDefClasses_MetaData), NewProp_StateDefClasses_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMStateMachineComponent_AddStates_Statics::NewProp_OutHandles_Inner = { "OutHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMStateHandle, METADATA_PARAMS(0, nullptr) }; // 457264434
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMStateMachineComponent_AddStates_Statics::NewProp_OutHandles = { "OutHandles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateMachineComponent_eventAddStates_Parms, OutHandles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 457264434
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMStateMachineComponent_AddStates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateMachineComponent_AddStates_Statics::NewProp_StateDefClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateMachineComponent_AddStates_Statics::NewProp_StateDefClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateMachineComponent_AddStates_Statics::NewProp_OutHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateMachineComponent_AddStates_Statics::NewProp_OutHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_AddStates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMStateMachineComponent_AddStates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMStateMachineComponent, nullptr, "AddStates", Z_Construct_UFunction_UMStateMachineComponent_AddStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_AddStates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMStateMachineComponent_AddStates_Statics::MStateMachineComponent_eventAddStates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_AddStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMStateMachineComponent_AddStates_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMStateMachineComponent_AddStates_Statics::MStateMachineComponent_eventAddStates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMStateMachineComponent_AddStates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMStateMachineComponent_AddStates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMStateMachineComponent::execAddStates)
{
	P_GET_TARRAY_REF(TSubclassOf<UMStateDefinition>,Z_Param_Out_StateDefClasses);
	P_GET_TARRAY_REF(FMStateHandle,Z_Param_Out_OutHandles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStates(Z_Param_Out_StateDefClasses,Z_Param_Out_OutHandles);
	P_NATIVE_END;
}
// ********** End Class UMStateMachineComponent Function AddStates *********************************

// ********** Begin Class UMStateMachineComponent Function CanSwitchToNext *************************
struct Z_Construct_UFunction_UMStateMachineComponent_CanSwitchToNext_Statics
{
	struct MStateMachineComponent_eventCanSwitchToNext_Parms
	{
		FGameplayTag NextStateTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MStateMachine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief \xe6\xac\xa1\xe3\x81\xae\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xab\xe5\x88\x87\xe3\x82\x8a\xe6\x9b\xbf\xe3\x81\x88\xe3\x82\x89\xe3\x82\x8c\xe3\x82\x8b\xe3\x81\x8b\xe3\x82\x92\xe7\xa2\xba\xe8\xaa\x8d\xe3\x81\x99\xe3\x82\x8b\n   * \n   * @param \xe6\xac\xa1\xe3\x81\xae\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xbf\xe3\x82\xb0\n   * \n   * @return \xe7\x8f\xbe\xe5\x9c\xa8\xe3\x81\xae\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x81\x8c\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\x8b\xe3\x81\xa4\xe6\xac\xa1\xe3\x81\xae\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xab\xe5\x88\x87\xe3\x82\x8a\xe6\x9b\xbf\xe3\x81\x88\xe3\x82\x89\xe3\x82\x8c\xe3\x82\x8b\xe3\x82\xbf\xe3\x82\xb0\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\xab\xe5\x85\xa5\xe5\x8a\x9b\xe3\x82\xbf\xe3\x82\xb0\xe3\x81\x8c\xe5\x85\xa5\xe3\x81\xa3\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8c\xe3\x81\xb0true\xe3\x80\x81\n   *         \xe3\x81\x9d\xe3\x82\x8c\xe4\xbb\xa5\xe5\xa4\x96\xe3\x81\xaf""false\n   */" },
#endif
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief \xe6\xac\xa1\xe3\x81\xae\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xab\xe5\x88\x87\xe3\x82\x8a\xe6\x9b\xbf\xe3\x81\x88\xe3\x82\x89\xe3\x82\x8c\xe3\x82\x8b\xe3\x81\x8b\xe3\x82\x92\xe7\xa2\xba\xe8\xaa\x8d\xe3\x81\x99\xe3\x82\x8b\n\n@param \xe6\xac\xa1\xe3\x81\xae\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xbf\xe3\x82\xb0\n\n@return \xe7\x8f\xbe\xe5\x9c\xa8\xe3\x81\xae\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x81\x8c\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\x8b\xe3\x81\xa4\xe6\xac\xa1\xe3\x81\xae\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xab\xe5\x88\x87\xe3\x82\x8a\xe6\x9b\xbf\xe3\x81\x88\xe3\x82\x89\xe3\x82\x8c\xe3\x82\x8b\xe3\x82\xbf\xe3\x82\xb0\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\xab\xe5\x85\xa5\xe5\x8a\x9b\xe3\x82\xbf\xe3\x82\xb0\xe3\x81\x8c\xe5\x85\xa5\xe3\x81\xa3\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8c\xe3\x81\xb0true\xe3\x80\x81\n        \xe3\x81\x9d\xe3\x82\x8c\xe4\xbb\xa5\xe5\xa4\x96\xe3\x81\xaf""false" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextStateTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextStateTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMStateMachineComponent_CanSwitchToNext_Statics::NewProp_NextStateTag = { "NextStateTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateMachineComponent_eventCanSwitchToNext_Parms, NextStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextStateTag_MetaData), NewProp_NextStateTag_MetaData) }; // 133831994
void Z_Construct_UFunction_UMStateMachineComponent_CanSwitchToNext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MStateMachineComponent_eventCanSwitchToNext_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMStateMachineComponent_CanSwitchToNext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MStateMachineComponent_eventCanSwitchToNext_Parms), &Z_Construct_UFunction_UMStateMachineComponent_CanSwitchToNext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMStateMachineComponent_CanSwitchToNext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateMachineComponent_CanSwitchToNext_Statics::NewProp_NextStateTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateMachineComponent_CanSwitchToNext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_CanSwitchToNext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMStateMachineComponent_CanSwitchToNext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMStateMachineComponent, nullptr, "CanSwitchToNext", Z_Construct_UFunction_UMStateMachineComponent_CanSwitchToNext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_CanSwitchToNext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMStateMachineComponent_CanSwitchToNext_Statics::MStateMachineComponent_eventCanSwitchToNext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_CanSwitchToNext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMStateMachineComponent_CanSwitchToNext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMStateMachineComponent_CanSwitchToNext_Statics::MStateMachineComponent_eventCanSwitchToNext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMStateMachineComponent_CanSwitchToNext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMStateMachineComponent_CanSwitchToNext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMStateMachineComponent::execCanSwitchToNext)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NextStateTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanSwitchToNext(Z_Param_Out_NextStateTag);
	P_NATIVE_END;
}
// ********** End Class UMStateMachineComponent Function CanSwitchToNext ***************************

// ********** Begin Class UMStateMachineComponent Function ContainsStateTag ************************
struct Z_Construct_UFunction_UMStateMachineComponent_ContainsStateTag_Statics
{
	struct MStateMachineComponent_eventContainsStateTag_Parms
	{
		FGameplayTag Tag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MStateMachine|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xbf\xe3\x82\xb0\xe3\x81\x8c\xe5\xad\x98\xe5\x9c\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x82\x92\xe7\xa2\xba\xe8\xaa\x8d\xe3\x81\x99\xe3\x82\x8b\n   * \n   * @param Tag \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xbf\xe3\x82\xb0\n   * \n   * @return \xe8\xa6\x8b\xe3\x81\xa4\xe3\x81\x8b\xe3\x81\xa3\xe3\x81\x9f\xe3\x82\x89true\xe3\x80\x81\xe3\x81\x9d\xe3\x82\x8c\xe4\xbb\xa5\xe5\xa4\x96\xe3\x81\xaf""false\n   */" },
#endif
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xbf\xe3\x82\xb0\xe3\x81\x8c\xe5\xad\x98\xe5\x9c\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x82\x92\xe7\xa2\xba\xe8\xaa\x8d\xe3\x81\x99\xe3\x82\x8b\n\n@param Tag \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xbf\xe3\x82\xb0\n\n@return \xe8\xa6\x8b\xe3\x81\xa4\xe3\x81\x8b\xe3\x81\xa3\xe3\x81\x9f\xe3\x82\x89true\xe3\x80\x81\xe3\x81\x9d\xe3\x82\x8c\xe4\xbb\xa5\xe5\xa4\x96\xe3\x81\xaf""false" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMStateMachineComponent_ContainsStateTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateMachineComponent_eventContainsStateTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
void Z_Construct_UFunction_UMStateMachineComponent_ContainsStateTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MStateMachineComponent_eventContainsStateTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMStateMachineComponent_ContainsStateTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MStateMachineComponent_eventContainsStateTag_Parms), &Z_Construct_UFunction_UMStateMachineComponent_ContainsStateTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMStateMachineComponent_ContainsStateTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateMachineComponent_ContainsStateTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateMachineComponent_ContainsStateTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_ContainsStateTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMStateMachineComponent_ContainsStateTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMStateMachineComponent, nullptr, "ContainsStateTag", Z_Construct_UFunction_UMStateMachineComponent_ContainsStateTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_ContainsStateTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMStateMachineComponent_ContainsStateTag_Statics::MStateMachineComponent_eventContainsStateTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_ContainsStateTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMStateMachineComponent_ContainsStateTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMStateMachineComponent_ContainsStateTag_Statics::MStateMachineComponent_eventContainsStateTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMStateMachineComponent_ContainsStateTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMStateMachineComponent_ContainsStateTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMStateMachineComponent::execContainsStateTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ContainsStateTag(Z_Param_Out_Tag);
	P_NATIVE_END;
}
// ********** End Class UMStateMachineComponent Function ContainsStateTag **************************

// ********** Begin Class UMStateMachineComponent Function GetCurrentStateTag **********************
struct Z_Construct_UFunction_UMStateMachineComponent_GetCurrentStateTag_Statics
{
	struct MStateMachineComponent_eventGetCurrentStateTag_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MStateMachine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief \xe4\xbb\x8a\xe3\x81\xae\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xbf\xe3\x82\xb0\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x99\xe3\x82\x8b\n   * \n   * @return \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x81\x8c\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xa0\xe3\x81\xa3\xe3\x81\x9f\xe3\x82\x89\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xab\xe3\x83\x90\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x89\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x82\xbf\xe3\x82\xb0\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x99\xe3\x80\x81\xe3\x81\x9d\xe3\x82\x8c\xe4\xbb\xa5\xe5\xa4\x96\xe3\x81\xaf""FGameplayTag\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x99\n   */" },
#endif
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief \xe4\xbb\x8a\xe3\x81\xae\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xbf\xe3\x82\xb0\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x99\xe3\x82\x8b\n\n@return \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x81\x8c\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xa0\xe3\x81\xa3\xe3\x81\x9f\xe3\x82\x89\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xab\xe3\x83\x90\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x89\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x82\xbf\xe3\x82\xb0\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x99\xe3\x80\x81\xe3\x81\x9d\xe3\x82\x8c\xe4\xbb\xa5\xe5\xa4\x96\xe3\x81\xaf""FGameplayTag\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x99" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMStateMachineComponent_GetCurrentStateTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateMachineComponent_eventGetCurrentStateTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMStateMachineComponent_GetCurrentStateTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateMachineComponent_GetCurrentStateTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_GetCurrentStateTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMStateMachineComponent_GetCurrentStateTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMStateMachineComponent, nullptr, "GetCurrentStateTag", Z_Construct_UFunction_UMStateMachineComponent_GetCurrentStateTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_GetCurrentStateTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMStateMachineComponent_GetCurrentStateTag_Statics::MStateMachineComponent_eventGetCurrentStateTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_GetCurrentStateTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMStateMachineComponent_GetCurrentStateTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMStateMachineComponent_GetCurrentStateTag_Statics::MStateMachineComponent_eventGetCurrentStateTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMStateMachineComponent_GetCurrentStateTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMStateMachineComponent_GetCurrentStateTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMStateMachineComponent::execGetCurrentStateTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetCurrentStateTag();
	P_NATIVE_END;
}
// ********** End Class UMStateMachineComponent Function GetCurrentStateTag ************************

// ********** Begin Class UMStateMachineComponent Function GetStateTagByInstance *******************
struct Z_Construct_UFunction_UMStateMachineComponent_GetStateTagByInstance_Statics
{
	struct MStateMachineComponent_eventGetStateTagByInstance_Parms
	{
		const UMStateInstance* StateInstance;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MStateMachine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\xa7\xe3\x82\xbf\xe3\x82\xb0\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x99\xe3\x82\x8b\n   * \n   * @param StateInstance \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xbf\xe3\x83\xbc\n   * \n   * @return \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x83\x9e\xe3\x82\xb7\xe3\x83\xb3\xe3\x81\xab\xe5\x85\xa5\xe3\x81\xa3\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8c\xe3\x81\xb0\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xbf\xe3\x82\xb0\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x99\xe3\x80\x81\n   *         \xe3\x81\x9d\xe3\x82\x8c\xe4\xbb\xa5\xe5\xa4\x96\xe3\x81\xaf""FGameplayTag::EmptyTag\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x99\n   */" },
#endif
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\xa7\xe3\x82\xbf\xe3\x82\xb0\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x99\xe3\x82\x8b\n\n@param StateInstance \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xbf\xe3\x83\xbc\n\n@return \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x83\x9e\xe3\x82\xb7\xe3\x83\xb3\xe3\x81\xab\xe5\x85\xa5\xe3\x81\xa3\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8c\xe3\x81\xb0\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xbf\xe3\x82\xb0\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x99\xe3\x80\x81\n        \xe3\x81\x9d\xe3\x82\x8c\xe4\xbb\xa5\xe5\xa4\x96\xe3\x81\xaf""FGameplayTag::EmptyTag\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x99" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMStateMachineComponent_GetStateTagByInstance_Statics::NewProp_StateInstance = { "StateInstance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateMachineComponent_eventGetStateTagByInstance_Parms, StateInstance), Z_Construct_UClass_UMStateInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateInstance_MetaData), NewProp_StateInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMStateMachineComponent_GetStateTagByInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateMachineComponent_eventGetStateTagByInstance_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMStateMachineComponent_GetStateTagByInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateMachineComponent_GetStateTagByInstance_Statics::NewProp_StateInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateMachineComponent_GetStateTagByInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_GetStateTagByInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMStateMachineComponent_GetStateTagByInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMStateMachineComponent, nullptr, "GetStateTagByInstance", Z_Construct_UFunction_UMStateMachineComponent_GetStateTagByInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_GetStateTagByInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMStateMachineComponent_GetStateTagByInstance_Statics::MStateMachineComponent_eventGetStateTagByInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_GetStateTagByInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMStateMachineComponent_GetStateTagByInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMStateMachineComponent_GetStateTagByInstance_Statics::MStateMachineComponent_eventGetStateTagByInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMStateMachineComponent_GetStateTagByInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMStateMachineComponent_GetStateTagByInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMStateMachineComponent::execGetStateTagByInstance)
{
	P_GET_OBJECT(UMStateInstance,Z_Param_StateInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetStateTagByInstance(Z_Param_StateInstance);
	P_NATIVE_END;
}
// ********** End Class UMStateMachineComponent Function GetStateTagByInstance *********************

// ********** Begin Class UMStateMachineComponent Function RemoveState *****************************
struct Z_Construct_UFunction_UMStateMachineComponent_RemoveState_Statics
{
	struct MStateMachineComponent_eventRemoveState_Parms
	{
		FMStateHandle StateHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MStateMachine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\n   * \n   * @param StateHandle \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x83\x8f\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xab\n   */" },
#endif
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\n\n@param StateHandle \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x83\x8f\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xab" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMStateMachineComponent_RemoveState_Statics::NewProp_StateHandle = { "StateHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateMachineComponent_eventRemoveState_Parms, StateHandle), Z_Construct_UScriptStruct_FMStateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateHandle_MetaData), NewProp_StateHandle_MetaData) }; // 457264434
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMStateMachineComponent_RemoveState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateMachineComponent_RemoveState_Statics::NewProp_StateHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_RemoveState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMStateMachineComponent_RemoveState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMStateMachineComponent, nullptr, "RemoveState", Z_Construct_UFunction_UMStateMachineComponent_RemoveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_RemoveState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMStateMachineComponent_RemoveState_Statics::MStateMachineComponent_eventRemoveState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_RemoveState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMStateMachineComponent_RemoveState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMStateMachineComponent_RemoveState_Statics::MStateMachineComponent_eventRemoveState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMStateMachineComponent_RemoveState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMStateMachineComponent_RemoveState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMStateMachineComponent::execRemoveState)
{
	P_GET_STRUCT_REF(FMStateHandle,Z_Param_Out_StateHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveState(Z_Param_Out_StateHandle);
	P_NATIVE_END;
}
// ********** End Class UMStateMachineComponent Function RemoveState *******************************

// ********** Begin Class UMStateMachineComponent Function SetEntryState ***************************
struct Z_Construct_UFunction_UMStateMachineComponent_SetEntryState_Statics
{
	struct MStateMachineComponent_eventSetEntryState_Parms
	{
		FGameplayTag EntryStateTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MStateMachine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x83\x9e\xe3\x82\xb7\xe3\x83\xb3\xe3\x81\xae\xe5\x88\x9d\xe6\x9c\x9f\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\n   */" },
#endif
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x83\x9e\xe3\x82\xb7\xe3\x83\xb3\xe3\x81\xae\xe5\x88\x9d\xe6\x9c\x9f\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryStateTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntryStateTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMStateMachineComponent_SetEntryState_Statics::NewProp_EntryStateTag = { "EntryStateTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateMachineComponent_eventSetEntryState_Parms, EntryStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryStateTag_MetaData), NewProp_EntryStateTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMStateMachineComponent_SetEntryState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateMachineComponent_SetEntryState_Statics::NewProp_EntryStateTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_SetEntryState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMStateMachineComponent_SetEntryState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMStateMachineComponent, nullptr, "SetEntryState", Z_Construct_UFunction_UMStateMachineComponent_SetEntryState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_SetEntryState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMStateMachineComponent_SetEntryState_Statics::MStateMachineComponent_eventSetEntryState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_SetEntryState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMStateMachineComponent_SetEntryState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMStateMachineComponent_SetEntryState_Statics::MStateMachineComponent_eventSetEntryState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMStateMachineComponent_SetEntryState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMStateMachineComponent_SetEntryState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMStateMachineComponent::execSetEntryState)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_EntryStateTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEntryState(Z_Param_Out_EntryStateTag);
	P_NATIVE_END;
}
// ********** End Class UMStateMachineComponent Function SetEntryState *****************************

// ********** Begin Class UMStateMachineComponent Function StartTickState **************************
struct Z_Construct_UFunction_UMStateMachineComponent_StartTickState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MStateMachine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x83\x9e\xe3\x82\xb7\xe3\x83\xb3\xe3\x82\x92\xe8\xb5\xb7\xe5\x8b\x95\xe3\x81\x99\xe3\x82\x8b\n   */" },
#endif
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x83\x9e\xe3\x82\xb7\xe3\x83\xb3\xe3\x82\x92\xe8\xb5\xb7\xe5\x8b\x95\xe3\x81\x99\xe3\x82\x8b" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMStateMachineComponent_StartTickState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMStateMachineComponent, nullptr, "StartTickState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_StartTickState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMStateMachineComponent_StartTickState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMStateMachineComponent_StartTickState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMStateMachineComponent_StartTickState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMStateMachineComponent::execStartTickState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartTickState();
	P_NATIVE_END;
}
// ********** End Class UMStateMachineComponent Function StartTickState ****************************

// ********** Begin Class UMStateMachineComponent Function StopTickState ***************************
struct Z_Construct_UFunction_UMStateMachineComponent_StopTickState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MStateMachine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x83\x9e\xe3\x82\xb7\xe3\x83\xb3\xe3\x82\x92\xe6\xad\xa2\xe3\x82\x81\xe3\x82\x8b\n   */" },
#endif
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x83\x9e\xe3\x82\xb7\xe3\x83\xb3\xe3\x82\x92\xe6\xad\xa2\xe3\x82\x81\xe3\x82\x8b" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMStateMachineComponent_StopTickState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMStateMachineComponent, nullptr, "StopTickState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_StopTickState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMStateMachineComponent_StopTickState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMStateMachineComponent_StopTickState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMStateMachineComponent_StopTickState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMStateMachineComponent::execStopTickState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopTickState();
	P_NATIVE_END;
}
// ********** End Class UMStateMachineComponent Function StopTickState *****************************

// ********** Begin Class UMStateMachineComponent Function SwitchNextState *************************
struct Z_Construct_UFunction_UMStateMachineComponent_SwitchNextState_Statics
{
	struct MStateMachineComponent_eventSwitchNextState_Parms
	{
		FGameplayTag NextStateTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MStateMachine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief \xe6\xac\xa1\xe3\x81\xae\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xab\xe5\x88\x87\xe3\x82\x8a\xe6\x9b\xbf\xe3\x81\x88\xe3\x82\x8b\n   * \n   * @param NextStateTag \xe6\xac\xa1\xe3\x81\xae\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xae\xe3\x82\xbf\xe3\x82\xb0\n   * \n   * @return \xe5\x88\x87\xe3\x82\x8a\xe6\x9b\xbf\xe3\x81\x88\xe3\x81\x8c\xe6\x88\x90\xe5\x8a\x9f\xe3\x81\x97\xe3\x81\x9f\xe3\x82\x89true, \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x81\x8c\xe5\xad\x98\xe5\x9c\xa8\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\xe3\x80\x81\xe3\x82\xbf\xe3\x82\xb0\xe3\x81\x8c\xe7\x84\xa1\xe5\x8a\xb9\xe3\x81\xaa\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf""false \n   */" },
#endif
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief \xe6\xac\xa1\xe3\x81\xae\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xab\xe5\x88\x87\xe3\x82\x8a\xe6\x9b\xbf\xe3\x81\x88\xe3\x82\x8b\n\n@param NextStateTag \xe6\xac\xa1\xe3\x81\xae\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xae\xe3\x82\xbf\xe3\x82\xb0\n\n@return \xe5\x88\x87\xe3\x82\x8a\xe6\x9b\xbf\xe3\x81\x88\xe3\x81\x8c\xe6\x88\x90\xe5\x8a\x9f\xe3\x81\x97\xe3\x81\x9f\xe3\x82\x89true, \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x81\x8c\xe5\xad\x98\xe5\x9c\xa8\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\xe3\x80\x81\xe3\x82\xbf\xe3\x82\xb0\xe3\x81\x8c\xe7\x84\xa1\xe5\x8a\xb9\xe3\x81\xaa\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf""false" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextStateTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextStateTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMStateMachineComponent_SwitchNextState_Statics::NewProp_NextStateTag = { "NextStateTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MStateMachineComponent_eventSwitchNextState_Parms, NextStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextStateTag_MetaData), NewProp_NextStateTag_MetaData) }; // 133831994
void Z_Construct_UFunction_UMStateMachineComponent_SwitchNextState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MStateMachineComponent_eventSwitchNextState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMStateMachineComponent_SwitchNextState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MStateMachineComponent_eventSwitchNextState_Parms), &Z_Construct_UFunction_UMStateMachineComponent_SwitchNextState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMStateMachineComponent_SwitchNextState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateMachineComponent_SwitchNextState_Statics::NewProp_NextStateTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMStateMachineComponent_SwitchNextState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_SwitchNextState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMStateMachineComponent_SwitchNextState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMStateMachineComponent, nullptr, "SwitchNextState", Z_Construct_UFunction_UMStateMachineComponent_SwitchNextState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_SwitchNextState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMStateMachineComponent_SwitchNextState_Statics::MStateMachineComponent_eventSwitchNextState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMStateMachineComponent_SwitchNextState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMStateMachineComponent_SwitchNextState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMStateMachineComponent_SwitchNextState_Statics::MStateMachineComponent_eventSwitchNextState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMStateMachineComponent_SwitchNextState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMStateMachineComponent_SwitchNextState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMStateMachineComponent::execSwitchNextState)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NextStateTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SwitchNextState(Z_Param_Out_NextStateTag);
	P_NATIVE_END;
}
// ********** End Class UMStateMachineComponent Function SwitchNextState ***************************

// ********** Begin Class UMStateMachineComponent **************************************************
void UMStateMachineComponent::StaticRegisterNativesUMStateMachineComponent()
{
	UClass* Class = UMStateMachineComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddNewState", &UMStateMachineComponent::execAddNewState },
		{ "AddStates", &UMStateMachineComponent::execAddStates },
		{ "CanSwitchToNext", &UMStateMachineComponent::execCanSwitchToNext },
		{ "ContainsStateTag", &UMStateMachineComponent::execContainsStateTag },
		{ "GetCurrentStateTag", &UMStateMachineComponent::execGetCurrentStateTag },
		{ "GetStateTagByInstance", &UMStateMachineComponent::execGetStateTagByInstance },
		{ "RemoveState", &UMStateMachineComponent::execRemoveState },
		{ "SetEntryState", &UMStateMachineComponent::execSetEntryState },
		{ "StartTickState", &UMStateMachineComponent::execStartTickState },
		{ "StopTickState", &UMStateMachineComponent::execStopTickState },
		{ "SwitchNextState", &UMStateMachineComponent::execSwitchNextState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMStateMachineComponent;
UClass* UMStateMachineComponent::GetPrivateStaticClass()
{
	using TClass = UMStateMachineComponent;
	if (!Z_Registration_Info_UClass_UMStateMachineComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MStateMachineComponent"),
			Z_Registration_Info_UClass_UMStateMachineComponent.InnerSingleton,
			StaticRegisterNativesUMStateMachineComponent,
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
	return Z_Registration_Info_UClass_UMStateMachineComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMStateMachineComponent_NoRegister()
{
	return UMStateMachineComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMStateMachineComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x83\x9e\xe3\x82\xb7\xe3\x83\xb3\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\n */" },
#endif
		{ "IncludePath", "MStateMachineComponent.h" },
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x83\x9e\xe3\x82\xb7\xe3\x83\xb3\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_stateList_MetaData[] = {
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_currentState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\xaa\xe3\x81\xa9\xe3\x81\xae\xe6\x83\x85\xe5\xa0\xb1\xe3\x82\x92\xe6\x8c\x81\xe3\x81\xa4\xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x88\n" },
#endif
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\xaa\xe3\x81\xa9\xe3\x81\xae\xe6\x83\x85\xe5\xa0\xb1\xe3\x82\x92\xe6\x8c\x81\xe3\x81\xa4\xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x88" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoInitializeContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MStateMachine|Initialize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x8f\xbe\xe5\x9c\xa8\xe3\x81\xae\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x82\xb9\n" },
#endif
		{ "ModuleRelativePath", "Public/MStateMachineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8f\xbe\xe5\x9c\xa8\xe3\x81\xae\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x82\xb9" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_m_stateList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_currentState;
	static void NewProp_bAutoInitializeContext_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoInitializeContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMStateMachineComponent_AddNewState, "AddNewState" }, // 435927064
		{ &Z_Construct_UFunction_UMStateMachineComponent_AddStates, "AddStates" }, // 623111260
		{ &Z_Construct_UFunction_UMStateMachineComponent_CanSwitchToNext, "CanSwitchToNext" }, // 3375239900
		{ &Z_Construct_UFunction_UMStateMachineComponent_ContainsStateTag, "ContainsStateTag" }, // 1717909124
		{ &Z_Construct_UFunction_UMStateMachineComponent_GetCurrentStateTag, "GetCurrentStateTag" }, // 3974624144
		{ &Z_Construct_UFunction_UMStateMachineComponent_GetStateTagByInstance, "GetStateTagByInstance" }, // 2807870550
		{ &Z_Construct_UFunction_UMStateMachineComponent_RemoveState, "RemoveState" }, // 1949417750
		{ &Z_Construct_UFunction_UMStateMachineComponent_SetEntryState, "SetEntryState" }, // 493939464
		{ &Z_Construct_UFunction_UMStateMachineComponent_StartTickState, "StartTickState" }, // 2787348824
		{ &Z_Construct_UFunction_UMStateMachineComponent_StopTickState, "StopTickState" }, // 1810953168
		{ &Z_Construct_UFunction_UMStateMachineComponent_SwitchNextState, "SwitchNextState" }, // 2303336410
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMStateMachineComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMStateMachineComponent_Statics::NewProp_m_stateList = { "m_stateList", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMStateMachineComponent, m_stateList), Z_Construct_UScriptStruct_FMStateMachineStateList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_stateList_MetaData), NewProp_m_stateList_MetaData) }; // 820494218
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMStateMachineComponent_Statics::NewProp_m_currentState = { "m_currentState", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMStateMachineComponent, m_currentState), Z_Construct_UClass_UMStateInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_currentState_MetaData), NewProp_m_currentState_MetaData) };
void Z_Construct_UClass_UMStateMachineComponent_Statics::NewProp_bAutoInitializeContext_SetBit(void* Obj)
{
	((UMStateMachineComponent*)Obj)->bAutoInitializeContext = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMStateMachineComponent_Statics::NewProp_bAutoInitializeContext = { "bAutoInitializeContext", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMStateMachineComponent), &Z_Construct_UClass_UMStateMachineComponent_Statics::NewProp_bAutoInitializeContext_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoInitializeContext_MetaData), NewProp_bAutoInitializeContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMStateMachineComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMStateMachineComponent_Statics::NewProp_m_stateList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMStateMachineComponent_Statics::NewProp_m_currentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMStateMachineComponent_Statics::NewProp_bAutoInitializeContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMStateMachineComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMStateMachineComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MStateMachine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMStateMachineComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMStateMachineComponent_Statics::ClassParams = {
	&UMStateMachineComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMStateMachineComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMStateMachineComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMStateMachineComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMStateMachineComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMStateMachineComponent()
{
	if (!Z_Registration_Info_UClass_UMStateMachineComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMStateMachineComponent.OuterSingleton, Z_Construct_UClass_UMStateMachineComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMStateMachineComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMStateMachineComponent);
UMStateMachineComponent::~UMStateMachineComponent() {}
// ********** End Class UMStateMachineComponent ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateMachineComponent_h__Script_MStateMachine_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMStateHandle::StaticStruct, Z_Construct_UScriptStruct_FMStateHandle_Statics::NewStructOps, TEXT("MStateHandle"), &Z_Registration_Info_UScriptStruct_FMStateHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMStateHandle), 457264434U) },
		{ FMStateMachineStateListEntry::StaticStruct, Z_Construct_UScriptStruct_FMStateMachineStateListEntry_Statics::NewStructOps, TEXT("MStateMachineStateListEntry"), &Z_Registration_Info_UScriptStruct_FMStateMachineStateListEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMStateMachineStateListEntry), 3628978584U) },
		{ FMStateMachineStateList::StaticStruct, Z_Construct_UScriptStruct_FMStateMachineStateList_Statics::NewStructOps, TEXT("MStateMachineStateList"), &Z_Registration_Info_UScriptStruct_FMStateMachineStateList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMStateMachineStateList), 820494218U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMStateMachineComponent, UMStateMachineComponent::StaticClass, TEXT("UMStateMachineComponent"), &Z_Registration_Info_UClass_UMStateMachineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMStateMachineComponent), 1468795096U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateMachineComponent_h__Script_MStateMachine_2271088034(TEXT("/Script/MStateMachine"),
	Z_CompiledInDeferFile_FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateMachineComponent_h__Script_MStateMachine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateMachineComponent_h__Script_MStateMachine_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateMachineComponent_h__Script_MStateMachine_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateMachineComponent_h__Script_MStateMachine_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
