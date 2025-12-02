// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MStateDefinition.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMStateDefinition() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MSTATEMACHINE_API UClass* Z_Construct_UClass_UMStateDefinition();
MSTATEMACHINE_API UClass* Z_Construct_UClass_UMStateDefinition_NoRegister();
MSTATEMACHINE_API UClass* Z_Construct_UClass_UMStateInstance_NoRegister();
MSTATEMACHINE_API UScriptStruct* Z_Construct_UScriptStruct_FMStateTagInfo();
UPackage* Z_Construct_UPackage__Script_MStateMachine();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMStateTagInfo ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMStateTagInfo;
class UScriptStruct* FMStateTagInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMStateTagInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMStateTagInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMStateTagInfo, (UObject*)Z_Construct_UPackage__Script_MStateMachine(), TEXT("MStateTagInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FMStateTagInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMStateTagInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xbf\xe3\x82\xb0\xe6\x83\x85\xe5\xa0\xb1\n */" },
#endif
		{ "ModuleRelativePath", "Public/MStateDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xbf\xe3\x82\xb0\xe6\x83\x85\xe5\xa0\xb1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTag_MetaData[] = {
		{ "Category", "MState|Transition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xbf\xe3\x82\xb0\n   */" },
#endif
		{ "ModuleRelativePath", "Public/MStateDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xbf\xe3\x82\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextTransitionTags_MetaData[] = {
		{ "Category", "MState|Transition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * \xe9\x81\xb7\xe7\xa7\xbb\xe3\x81\xa7\xe3\x81\x8d\xe3\x82\x8b\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xae\xe3\x82\xbf\xe3\x82\xb0\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x86\xe3\x83\x8a\n   */" },
#endif
		{ "ModuleRelativePath", "Public/MStateDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\xb7\xe7\xa7\xbb\xe3\x81\xa7\xe3\x81\x8d\xe3\x82\x8b\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xae\xe3\x82\xbf\xe3\x82\xb0\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x86\xe3\x83\x8a" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextTransitionTags_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_NextTransitionTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMStateTagInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMStateTagInfo_Statics::NewProp_StateTag = { "StateTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMStateTagInfo, StateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTag_MetaData), NewProp_StateTag_MetaData) }; // 133831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMStateTagInfo_Statics::NewProp_NextTransitionTags_ElementProp = { "NextTransitionTags", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
static_assert(TModels_V<CGetTypeHashable, FGameplayTag>, "The structure 'FGameplayTag' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMStateTagInfo_Statics::NewProp_NextTransitionTags = { "NextTransitionTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMStateTagInfo, NextTransitionTags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextTransitionTags_MetaData), NewProp_NextTransitionTags_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMStateTagInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMStateTagInfo_Statics::NewProp_StateTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMStateTagInfo_Statics::NewProp_NextTransitionTags_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMStateTagInfo_Statics::NewProp_NextTransitionTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMStateTagInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMStateTagInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MStateMachine,
	nullptr,
	&NewStructOps,
	"MStateTagInfo",
	Z_Construct_UScriptStruct_FMStateTagInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMStateTagInfo_Statics::PropPointers),
	sizeof(FMStateTagInfo),
	alignof(FMStateTagInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMStateTagInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMStateTagInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMStateTagInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FMStateTagInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMStateTagInfo.InnerSingleton, Z_Construct_UScriptStruct_FMStateTagInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMStateTagInfo.InnerSingleton;
}
// ********** End ScriptStruct FMStateTagInfo ******************************************************

// ********** Begin Class UMStateDefinition ********************************************************
void UMStateDefinition::StaticRegisterNativesUMStateDefinition()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMStateDefinition;
UClass* UMStateDefinition::GetPrivateStaticClass()
{
	using TClass = UMStateDefinition;
	if (!Z_Registration_Info_UClass_UMStateDefinition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MStateDefinition"),
			Z_Registration_Info_UClass_UMStateDefinition.InnerSingleton,
			StaticRegisterNativesUMStateDefinition,
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
	return Z_Registration_Info_UClass_UMStateDefinition.InnerSingleton;
}
UClass* Z_Construct_UClass_UMStateDefinition_NoRegister()
{
	return UMStateDefinition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMStateDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe5\xae\x9a\xe7\xbe\xa9\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\n */" },
#endif
		{ "IncludePath", "MStateDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MStateDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe5\xae\x9a\xe7\xbe\xa9\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceType_MetaData[] = {
		{ "Category", "MState|Definition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x82\xb9\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\n   */" },
#endif
		{ "ModuleRelativePath", "Public/MStateDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x82\xb9\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagInfo_MetaData[] = {
		{ "Category", "MState|Definition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xbf\xe3\x82\xb0\xe6\x83\x85\xe5\xa0\xb1\n   */" },
#endif
		{ "ModuleRelativePath", "Public/MStateDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xbf\xe3\x82\xb0\xe6\x83\x85\xe5\xa0\xb1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InstanceType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMStateDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMStateDefinition_Statics::NewProp_InstanceType = { "InstanceType", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMStateDefinition, InstanceType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMStateInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceType_MetaData), NewProp_InstanceType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMStateDefinition_Statics::NewProp_TagInfo = { "TagInfo", nullptr, (EPropertyFlags)0x0010000000010011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMStateDefinition, TagInfo), Z_Construct_UScriptStruct_FMStateTagInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagInfo_MetaData), NewProp_TagInfo_MetaData) }; // 3102446149
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMStateDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMStateDefinition_Statics::NewProp_InstanceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMStateDefinition_Statics::NewProp_TagInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMStateDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMStateDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MStateMachine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMStateDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMStateDefinition_Statics::ClassParams = {
	&UMStateDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMStateDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMStateDefinition_Statics::PropPointers),
	0,
	0x000100A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMStateDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UMStateDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMStateDefinition()
{
	if (!Z_Registration_Info_UClass_UMStateDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMStateDefinition.OuterSingleton, Z_Construct_UClass_UMStateDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMStateDefinition.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMStateDefinition);
UMStateDefinition::~UMStateDefinition() {}
// ********** End Class UMStateDefinition **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateDefinition_h__Script_MStateMachine_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMStateTagInfo::StaticStruct, Z_Construct_UScriptStruct_FMStateTagInfo_Statics::NewStructOps, TEXT("MStateTagInfo"), &Z_Registration_Info_UScriptStruct_FMStateTagInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMStateTagInfo), 3102446149U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMStateDefinition, UMStateDefinition::StaticClass, TEXT("UMStateDefinition"), &Z_Registration_Info_UClass_UMStateDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMStateDefinition), 3091069987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateDefinition_h__Script_MStateMachine_931266080(TEXT("/Script/MStateMachine"),
	Z_CompiledInDeferFile_FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateDefinition_h__Script_MStateMachine_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateDefinition_h__Script_MStateMachine_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateDefinition_h__Script_MStateMachine_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ARRanger_Plugins_MStateMachine_Source_MStateMachine_Public_MStateDefinition_h__Script_MStateMachine_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
