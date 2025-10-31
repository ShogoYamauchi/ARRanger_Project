// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/MDMeshSnapshot.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMDMeshSnapshot() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
MOTIONDIFF_API UScriptStruct* Z_Construct_UScriptStruct_FMDMeshSnapshot();
UPackage* Z_Construct_UPackage__Script_MotionDiff();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMDMeshSnapshot ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMDMeshSnapshot;
class UScriptStruct* FMDMeshSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMDMeshSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMDMeshSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMDMeshSnapshot, (UObject*)Z_Construct_UPackage__Script_MotionDiff(), TEXT("MDMeshSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_FMDMeshSnapshot.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMDMeshSnapshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MDMeshSnapshot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshTransform_MetaData[] = {
		{ "Category", "MDMeshSnapshot" },
		{ "ModuleRelativePath", "Public/MDMeshSnapshot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[] = {
		{ "Category", "MDMeshSnapshot" },
		{ "ModuleRelativePath", "Public/MDMeshSnapshot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "MDMeshSnapshot" },
		{ "ModuleRelativePath", "Public/MDMeshSnapshot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[] = {
		{ "Category", "MDMeshSnapshot" },
		{ "ModuleRelativePath", "Public/MDMeshSnapshot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshTransform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SnapshotName;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMDMeshSnapshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMDMeshSnapshot_Statics::NewProp_MeshTransform = { "MeshTransform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMDMeshSnapshot, MeshTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshTransform_MetaData), NewProp_MeshTransform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMDMeshSnapshot_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMDMeshSnapshot, SnapshotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotName_MetaData), NewProp_SnapshotName_MetaData) };
void Z_Construct_UScriptStruct_FMDMeshSnapshot_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FMDMeshSnapshot*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMDMeshSnapshot_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMDMeshSnapshot), &Z_Construct_UScriptStruct_FMDMeshSnapshot_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FMDMeshSnapshot_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMDMeshSnapshot, LODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODIndex_MetaData), NewProp_LODIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMDMeshSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMDMeshSnapshot_Statics::NewProp_MeshTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMDMeshSnapshot_Statics::NewProp_SnapshotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMDMeshSnapshot_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMDMeshSnapshot_Statics::NewProp_LODIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMDMeshSnapshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMDMeshSnapshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MotionDiff,
	nullptr,
	&NewStructOps,
	"MDMeshSnapshot",
	Z_Construct_UScriptStruct_FMDMeshSnapshot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMDMeshSnapshot_Statics::PropPointers),
	sizeof(FMDMeshSnapshot),
	alignof(FMDMeshSnapshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMDMeshSnapshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMDMeshSnapshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMDMeshSnapshot()
{
	if (!Z_Registration_Info_UScriptStruct_FMDMeshSnapshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMDMeshSnapshot.InnerSingleton, Z_Construct_UScriptStruct_FMDMeshSnapshot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMDMeshSnapshot.InnerSingleton;
}
// ********** End ScriptStruct FMDMeshSnapshot *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshSnapshot_h__Script_MotionDiff_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMDMeshSnapshot::StaticStruct, Z_Construct_UScriptStruct_FMDMeshSnapshot_Statics::NewStructOps, TEXT("MDMeshSnapshot"), &Z_Registration_Info_UScriptStruct_FMDMeshSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMDMeshSnapshot), 2441926720U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshSnapshot_h__Script_MotionDiff_2000458967(TEXT("/Script/MotionDiff"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshSnapshot_h__Script_MotionDiff_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshSnapshot_h__Script_MotionDiff_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
