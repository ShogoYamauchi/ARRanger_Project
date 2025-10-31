// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/MDMeshCaptureComponent.h"
#include "Public/MDMeshCaptureMaterial.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMDMeshCaptureComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MOTIONDIFF_API UClass* Z_Construct_UClass_UMDMeshCapture_NoRegister();
MOTIONDIFF_API UClass* Z_Construct_UClass_UMDMeshCaptureComponent();
MOTIONDIFF_API UClass* Z_Construct_UClass_UMDMeshCaptureComponent_NoRegister();
MOTIONDIFF_API UEnum* Z_Construct_UEnum_MotionDiff_EMDMeshCaptureDestroyMode();
MOTIONDIFF_API UEnum* Z_Construct_UEnum_MotionDiff_EMDMeshCaptureShutterMode();
MOTIONDIFF_API UScriptStruct* Z_Construct_UScriptStruct_FMDMeshCapture_ElapseModeParameter();
MOTIONDIFF_API UScriptStruct* Z_Construct_UScriptStruct_FMDMeshCaptureMaterial();
MOTIONDIFF_API UScriptStruct* Z_Construct_UScriptStruct_FMDMeshCaptureParameters();
UPackage* Z_Construct_UPackage__Script_MotionDiff();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMDMeshCaptureDestroyMode *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMDMeshCaptureDestroyMode;
static UEnum* EMDMeshCaptureDestroyMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMDMeshCaptureDestroyMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMDMeshCaptureDestroyMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionDiff_EMDMeshCaptureDestroyMode, (UObject*)Z_Construct_UPackage__Script_MotionDiff(), TEXT("EMDMeshCaptureDestroyMode"));
	}
	return Z_Registration_Info_UEnum_EMDMeshCaptureDestroyMode.OuterSingleton;
}
template<> MOTIONDIFF_API UEnum* StaticEnum<EMDMeshCaptureDestroyMode>()
{
	return EMDMeshCaptureDestroyMode_StaticEnum();
}
struct Z_Construct_UEnum_MotionDiff_EMDMeshCaptureDestroyMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ElapsedTime.Comment", "// \xe6\xb6\x88\xe6\xbb\x85\xe3\x81\xaa\xe3\x81\x84\n" },
		{ "ElapsedTime.Name", "EMDMeshCaptureDestroyMode::ElapsedTime" },
		{ "ElapsedTime.ToolTip", "\xe6\xb6\x88\xe6\xbb\x85\xe3\x81\xaa\xe3\x81\x84" },
		{ "ModuleRelativePath", "Public/MDMeshCaptureComponent.h" },
		{ "None.Name", "EMDMeshCaptureDestroyMode::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMDMeshCaptureDestroyMode::None", (int64)EMDMeshCaptureDestroyMode::None },
		{ "EMDMeshCaptureDestroyMode::ElapsedTime", (int64)EMDMeshCaptureDestroyMode::ElapsedTime },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MotionDiff_EMDMeshCaptureDestroyMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MotionDiff,
	nullptr,
	"EMDMeshCaptureDestroyMode",
	"EMDMeshCaptureDestroyMode",
	Z_Construct_UEnum_MotionDiff_EMDMeshCaptureDestroyMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MotionDiff_EMDMeshCaptureDestroyMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MotionDiff_EMDMeshCaptureDestroyMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MotionDiff_EMDMeshCaptureDestroyMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MotionDiff_EMDMeshCaptureDestroyMode()
{
	if (!Z_Registration_Info_UEnum_EMDMeshCaptureDestroyMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMDMeshCaptureDestroyMode.InnerSingleton, Z_Construct_UEnum_MotionDiff_EMDMeshCaptureDestroyMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMDMeshCaptureDestroyMode.InnerSingleton;
}
// ********** End Enum EMDMeshCaptureDestroyMode ***************************************************

// ********** Begin Enum EMDMeshCaptureShutterMode *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMDMeshCaptureShutterMode;
static UEnum* EMDMeshCaptureShutterMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMDMeshCaptureShutterMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMDMeshCaptureShutterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionDiff_EMDMeshCaptureShutterMode, (UObject*)Z_Construct_UPackage__Script_MotionDiff(), TEXT("EMDMeshCaptureShutterMode"));
	}
	return Z_Registration_Info_UEnum_EMDMeshCaptureShutterMode.OuterSingleton;
}
template<> MOTIONDIFF_API UEnum* StaticEnum<EMDMeshCaptureShutterMode>()
{
	return EMDMeshCaptureShutterMode_StaticEnum();
}
struct Z_Construct_UEnum_MotionDiff_EMDMeshCaptureShutterMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Default.Name", "EMDMeshCaptureShutterMode::Default" },
		{ "IntervalBase.Name", "EMDMeshCaptureShutterMode::IntervalBase" },
		{ "ModuleRelativePath", "Public/MDMeshCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMDMeshCaptureShutterMode::Default", (int64)EMDMeshCaptureShutterMode::Default },
		{ "EMDMeshCaptureShutterMode::IntervalBase", (int64)EMDMeshCaptureShutterMode::IntervalBase },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MotionDiff_EMDMeshCaptureShutterMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MotionDiff,
	nullptr,
	"EMDMeshCaptureShutterMode",
	"EMDMeshCaptureShutterMode",
	Z_Construct_UEnum_MotionDiff_EMDMeshCaptureShutterMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MotionDiff_EMDMeshCaptureShutterMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MotionDiff_EMDMeshCaptureShutterMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MotionDiff_EMDMeshCaptureShutterMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MotionDiff_EMDMeshCaptureShutterMode()
{
	if (!Z_Registration_Info_UEnum_EMDMeshCaptureShutterMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMDMeshCaptureShutterMode.InnerSingleton, Z_Construct_UEnum_MotionDiff_EMDMeshCaptureShutterMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMDMeshCaptureShutterMode.InnerSingleton;
}
// ********** End Enum EMDMeshCaptureShutterMode ***************************************************

// ********** Begin ScriptStruct FMDMeshCapture_ElapseModeParameter ********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMDMeshCapture_ElapseModeParameter;
class UScriptStruct* FMDMeshCapture_ElapseModeParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMDMeshCapture_ElapseModeParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMDMeshCapture_ElapseModeParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMDMeshCapture_ElapseModeParameter, (UObject*)Z_Construct_UPackage__Script_MotionDiff(), TEXT("MDMeshCapture_ElapseModeParameter"));
	}
	return Z_Registration_Info_UScriptStruct_FMDMeshCapture_ElapseModeParameter.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMDMeshCapture_ElapseModeParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MDMeshCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntervalTime_MetaData[] = {
		{ "Category", "MDMeshCapture_ElapseModeParameter" },
		{ "DisplayName", "Time Interval" },
		{ "ModuleRelativePath", "Public/MDMeshCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntervalTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMDMeshCapture_ElapseModeParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMDMeshCapture_ElapseModeParameter_Statics::NewProp_IntervalTime = { "IntervalTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMDMeshCapture_ElapseModeParameter, IntervalTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntervalTime_MetaData), NewProp_IntervalTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMDMeshCapture_ElapseModeParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMDMeshCapture_ElapseModeParameter_Statics::NewProp_IntervalTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMDMeshCapture_ElapseModeParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMDMeshCapture_ElapseModeParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MotionDiff,
	nullptr,
	&NewStructOps,
	"MDMeshCapture_ElapseModeParameter",
	Z_Construct_UScriptStruct_FMDMeshCapture_ElapseModeParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMDMeshCapture_ElapseModeParameter_Statics::PropPointers),
	sizeof(FMDMeshCapture_ElapseModeParameter),
	alignof(FMDMeshCapture_ElapseModeParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMDMeshCapture_ElapseModeParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMDMeshCapture_ElapseModeParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMDMeshCapture_ElapseModeParameter()
{
	if (!Z_Registration_Info_UScriptStruct_FMDMeshCapture_ElapseModeParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMDMeshCapture_ElapseModeParameter.InnerSingleton, Z_Construct_UScriptStruct_FMDMeshCapture_ElapseModeParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMDMeshCapture_ElapseModeParameter.InnerSingleton;
}
// ********** End ScriptStruct FMDMeshCapture_ElapseModeParameter **********************************

// ********** Begin ScriptStruct FMDMeshCaptureParameters ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMDMeshCaptureParameters;
class UScriptStruct* FMDMeshCaptureParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMDMeshCaptureParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMDMeshCaptureParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMDMeshCaptureParameters, (UObject*)Z_Construct_UPackage__Script_MotionDiff(), TEXT("MDMeshCaptureParameters"));
	}
	return Z_Registration_Info_UScriptStruct_FMDMeshCaptureParameters.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Mesh capture parameter container\n * \n * \xe3\x83\xa1\xe3\x83\x83\xe3\x82\xb7\xe3\x83\xa5\xe3\x82\x92\xe3\x82\xad\xe3\x83\xa3\xe3\x83\x97\xe3\x83\x81\xe3\x83\xa3\xe3\x83\xbc\xe3\x81\x99\xe3\x82\x8b\xe5\xa4\x89\xe6\x95\xb0\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\n */" },
#endif
		{ "ModuleRelativePath", "Public/MDMeshCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh capture parameter container\n\n\xe3\x83\xa1\xe3\x83\x83\xe3\x82\xb7\xe3\x83\xa5\xe3\x82\x92\xe3\x82\xad\xe3\x83\xa3\xe3\x83\x97\xe3\x83\x81\xe3\x83\xa3\xe3\x83\xbc\xe3\x81\x99\xe3\x82\x8b\xe5\xa4\x89\xe6\x95\xb0\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureInterval_MetaData[] = {
		{ "Category", "MDMeshCaptureParameters" },
		{ "ClampMin", "0.000000" },
		{ "EditCondition", "bIsCapturing == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MDMeshCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCapturing_MetaData[] = {
		{ "Category", "MDMeshCaptureParameters" },
		{ "ModuleRelativePath", "Public/MDMeshCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldDestroy_MetaData[] = {
		{ "Category", "MDMeshCaptureParameters" },
		{ "EditCondition", "bIsCapturing == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MDMeshCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyMode_MetaData[] = {
		{ "Category", "MDMeshCaptureParameters" },
		{ "EditCondition", "bShouldDestroy == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MDMeshCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTimeParam_MetaData[] = {
		{ "Category", "MDMeshCaptureParameters" },
		{ "EditCondition", "DestroyMode == EMDMeshCaptureDestroyMode::ElapsedTime" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MDMeshCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CaptureInterval;
	static void NewProp_bIsCapturing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCapturing;
	static void NewProp_bShouldDestroy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDestroy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestroyMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DestroyMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ElapsedTimeParam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMDMeshCaptureParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::NewProp_CaptureInterval = { "CaptureInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMDMeshCaptureParameters, CaptureInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureInterval_MetaData), NewProp_CaptureInterval_MetaData) };
void Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::NewProp_bIsCapturing_SetBit(void* Obj)
{
	((FMDMeshCaptureParameters*)Obj)->bIsCapturing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::NewProp_bIsCapturing = { "bIsCapturing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMDMeshCaptureParameters), &Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::NewProp_bIsCapturing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCapturing_MetaData), NewProp_bIsCapturing_MetaData) };
void Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::NewProp_bShouldDestroy_SetBit(void* Obj)
{
	((FMDMeshCaptureParameters*)Obj)->bShouldDestroy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::NewProp_bShouldDestroy = { "bShouldDestroy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMDMeshCaptureParameters), &Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::NewProp_bShouldDestroy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldDestroy_MetaData), NewProp_bShouldDestroy_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::NewProp_DestroyMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::NewProp_DestroyMode = { "DestroyMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMDMeshCaptureParameters, DestroyMode), Z_Construct_UEnum_MotionDiff_EMDMeshCaptureDestroyMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyMode_MetaData), NewProp_DestroyMode_MetaData) }; // 2339744421
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::NewProp_ElapsedTimeParam = { "ElapsedTimeParam", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMDMeshCaptureParameters, ElapsedTimeParam), Z_Construct_UScriptStruct_FMDMeshCapture_ElapseModeParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElapsedTimeParam_MetaData), NewProp_ElapsedTimeParam_MetaData) }; // 3185062653
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::NewProp_CaptureInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::NewProp_bIsCapturing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::NewProp_bShouldDestroy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::NewProp_DestroyMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::NewProp_DestroyMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::NewProp_ElapsedTimeParam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MotionDiff,
	nullptr,
	&NewStructOps,
	"MDMeshCaptureParameters",
	Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::PropPointers),
	sizeof(FMDMeshCaptureParameters),
	alignof(FMDMeshCaptureParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMDMeshCaptureParameters()
{
	if (!Z_Registration_Info_UScriptStruct_FMDMeshCaptureParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMDMeshCaptureParameters.InnerSingleton, Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMDMeshCaptureParameters.InnerSingleton;
}
// ********** End ScriptStruct FMDMeshCaptureParameters ********************************************

// ********** Begin Class UMDMeshCaptureComponent **************************************************
void UMDMeshCaptureComponent::StaticRegisterNativesUMDMeshCaptureComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMDMeshCaptureComponent;
UClass* UMDMeshCaptureComponent::GetPrivateStaticClass()
{
	using TClass = UMDMeshCaptureComponent;
	if (!Z_Registration_Info_UClass_UMDMeshCaptureComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MDMeshCaptureComponent"),
			Z_Registration_Info_UClass_UMDMeshCaptureComponent.InnerSingleton,
			StaticRegisterNativesUMDMeshCaptureComponent,
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
	return Z_Registration_Info_UClass_UMDMeshCaptureComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMDMeshCaptureComponent_NoRegister()
{
	return UMDMeshCaptureComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMDMeshCaptureComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MDMeshCaptureComponent.h" },
		{ "ModuleRelativePath", "Public/MDMeshCaptureComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFirstMeshAttachToThis_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh Capture" },
		{ "ModuleRelativePath", "Public/MDMeshCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotMaterials_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh Capture" },
		{ "ModuleRelativePath", "Public/MDMeshCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureParam_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh Capture" },
		{ "ModuleRelativePath", "Public/MDMeshCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_captureInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/MDMeshCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseFirstMeshAttachToThis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFirstMeshAttachToThis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SnapshotMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SnapshotMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureParam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_captureInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMDMeshCaptureComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMDMeshCaptureComponent_Statics::NewProp_bUseFirstMeshAttachToThis_SetBit(void* Obj)
{
	((UMDMeshCaptureComponent*)Obj)->bUseFirstMeshAttachToThis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMDMeshCaptureComponent_Statics::NewProp_bUseFirstMeshAttachToThis = { "bUseFirstMeshAttachToThis", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMDMeshCaptureComponent), &Z_Construct_UClass_UMDMeshCaptureComponent_Statics::NewProp_bUseFirstMeshAttachToThis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFirstMeshAttachToThis_MetaData), NewProp_bUseFirstMeshAttachToThis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMDMeshCaptureComponent_Statics::NewProp_SnapshotMaterials_Inner = { "SnapshotMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMDMeshCaptureMaterial, METADATA_PARAMS(0, nullptr) }; // 4252021631
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMDMeshCaptureComponent_Statics::NewProp_SnapshotMaterials = { "SnapshotMaterials", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMDMeshCaptureComponent, SnapshotMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotMaterials_MetaData), NewProp_SnapshotMaterials_MetaData) }; // 4252021631
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMDMeshCaptureComponent_Statics::NewProp_CaptureParam = { "CaptureParam", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMDMeshCaptureComponent, CaptureParam), Z_Construct_UScriptStruct_FMDMeshCaptureParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureParam_MetaData), NewProp_CaptureParam_MetaData) }; // 3346254828
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMDMeshCaptureComponent_Statics::NewProp_m_captureInstance = { "m_captureInstance", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMDMeshCaptureComponent, m_captureInstance), Z_Construct_UClass_UMDMeshCapture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_captureInstance_MetaData), NewProp_m_captureInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMDMeshCaptureComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMDMeshCaptureComponent_Statics::NewProp_bUseFirstMeshAttachToThis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMDMeshCaptureComponent_Statics::NewProp_SnapshotMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMDMeshCaptureComponent_Statics::NewProp_SnapshotMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMDMeshCaptureComponent_Statics::NewProp_CaptureParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMDMeshCaptureComponent_Statics::NewProp_m_captureInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMDMeshCaptureComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMDMeshCaptureComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MotionDiff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMDMeshCaptureComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMDMeshCaptureComponent_Statics::ClassParams = {
	&UMDMeshCaptureComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMDMeshCaptureComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMDMeshCaptureComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMDMeshCaptureComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMDMeshCaptureComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMDMeshCaptureComponent()
{
	if (!Z_Registration_Info_UClass_UMDMeshCaptureComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMDMeshCaptureComponent.OuterSingleton, Z_Construct_UClass_UMDMeshCaptureComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMDMeshCaptureComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMDMeshCaptureComponent);
UMDMeshCaptureComponent::~UMDMeshCaptureComponent() {}
// ********** End Class UMDMeshCaptureComponent ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureComponent_h__Script_MotionDiff_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMDMeshCaptureDestroyMode_StaticEnum, TEXT("EMDMeshCaptureDestroyMode"), &Z_Registration_Info_UEnum_EMDMeshCaptureDestroyMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2339744421U) },
		{ EMDMeshCaptureShutterMode_StaticEnum, TEXT("EMDMeshCaptureShutterMode"), &Z_Registration_Info_UEnum_EMDMeshCaptureShutterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1877576193U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMDMeshCapture_ElapseModeParameter::StaticStruct, Z_Construct_UScriptStruct_FMDMeshCapture_ElapseModeParameter_Statics::NewStructOps, TEXT("MDMeshCapture_ElapseModeParameter"), &Z_Registration_Info_UScriptStruct_FMDMeshCapture_ElapseModeParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMDMeshCapture_ElapseModeParameter), 3185062653U) },
		{ FMDMeshCaptureParameters::StaticStruct, Z_Construct_UScriptStruct_FMDMeshCaptureParameters_Statics::NewStructOps, TEXT("MDMeshCaptureParameters"), &Z_Registration_Info_UScriptStruct_FMDMeshCaptureParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMDMeshCaptureParameters), 3346254828U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMDMeshCaptureComponent, UMDMeshCaptureComponent::StaticClass, TEXT("UMDMeshCaptureComponent"), &Z_Registration_Info_UClass_UMDMeshCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMDMeshCaptureComponent), 365576397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureComponent_h__Script_MotionDiff_1923983368(TEXT("/Script/MotionDiff"),
	Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureComponent_h__Script_MotionDiff_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureComponent_h__Script_MotionDiff_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureComponent_h__Script_MotionDiff_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureComponent_h__Script_MotionDiff_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureComponent_h__Script_MotionDiff_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MDMeshCaptureComponent_h__Script_MotionDiff_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
