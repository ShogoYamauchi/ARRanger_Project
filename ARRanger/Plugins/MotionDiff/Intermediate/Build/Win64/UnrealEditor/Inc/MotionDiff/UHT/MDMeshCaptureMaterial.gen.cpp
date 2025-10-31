// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/MDMeshCaptureMaterial.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMDMeshCaptureMaterial() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
MOTIONDIFF_API UScriptStruct* Z_Construct_UScriptStruct_FMDMeshCaptureMaterial();
UPackage* Z_Construct_UPackage__Script_MotionDiff();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMDMeshCaptureMaterial ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMDMeshCaptureMaterial;
class UScriptStruct* FMDMeshCaptureMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMDMeshCaptureMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMDMeshCaptureMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMDMeshCaptureMaterial, (UObject*)Z_Construct_UPackage__Script_MotionDiff(), TEXT("MDMeshCaptureMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_FMDMeshCaptureMaterial.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMDMeshCaptureMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/MDMeshCaptureMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "MotionDiff|Material" },
		{ "ModuleRelativePath", "Public/MDMeshCaptureMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSymbolName_MetaData[] = {
		{ "Category", "MotionDiff|Material" },
		{ "ModuleRelativePath", "Public/MDMeshCaptureMaterial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialSymbolName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMDMeshCaptureMaterial>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMDMeshCaptureMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMDMeshCaptureMaterial, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMDMeshCaptureMaterial_Statics::NewProp_MaterialSymbolName = { "MaterialSymbolName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMDMeshCaptureMaterial, MaterialSymbolName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSymbolName_MetaData), NewProp_MaterialSymbolName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMDMeshCaptureMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMDMeshCaptureMaterial_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMDMeshCaptureMaterial_Statics::NewProp_MaterialSymbolName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMDMeshCaptureMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMDMeshCaptureMaterial_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MotionDiff,
	nullptr,
	&NewStructOps,
	"MDMeshCaptureMaterial",
	Z_Construct_UScriptStruct_FMDMeshCaptureMaterial_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMDMeshCaptureMaterial_Statics::PropPointers),
	sizeof(FMDMeshCaptureMaterial),
	alignof(FMDMeshCaptureMaterial),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMDMeshCaptureMaterial_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMDMeshCaptureMaterial_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMDMeshCaptureMaterial()
{
	if (!Z_Registration_Info_UScriptStruct_FMDMeshCaptureMaterial.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMDMeshCaptureMaterial.InnerSingleton, Z_Construct_UScriptStruct_FMDMeshCaptureMaterial_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMDMeshCaptureMaterial.InnerSingleton;
}
// ********** End ScriptStruct FMDMeshCaptureMaterial **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureMaterial_h__Script_MotionDiff_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMDMeshCaptureMaterial::StaticStruct, Z_Construct_UScriptStruct_FMDMeshCaptureMaterial_Statics::NewStructOps, TEXT("MDMeshCaptureMaterial"), &Z_Registration_Info_UScriptStruct_FMDMeshCaptureMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMDMeshCaptureMaterial), 4252021631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureMaterial_h__Script_MotionDiff_3668524280(TEXT("/Script/MotionDiff"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureMaterial_h__Script_MotionDiff_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureMaterial_h__Script_MotionDiff_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
