// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/MeshCapture/MDStaticMeshCapture.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMDStaticMeshCapture() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MOTIONDIFF_API UClass* Z_Construct_UClass_UMDMeshCapture();
MOTIONDIFF_API UClass* Z_Construct_UClass_UMDStaticMeshCapture();
MOTIONDIFF_API UClass* Z_Construct_UClass_UMDStaticMeshCapture_NoRegister();
UPackage* Z_Construct_UPackage__Script_MotionDiff();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMDStaticMeshCapture *****************************************************
void UMDStaticMeshCapture::StaticRegisterNativesUMDStaticMeshCapture()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMDStaticMeshCapture;
UClass* UMDStaticMeshCapture::GetPrivateStaticClass()
{
	using TClass = UMDStaticMeshCapture;
	if (!Z_Registration_Info_UClass_UMDStaticMeshCapture.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MDStaticMeshCapture"),
			Z_Registration_Info_UClass_UMDStaticMeshCapture.InnerSingleton,
			StaticRegisterNativesUMDStaticMeshCapture,
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
	return Z_Registration_Info_UClass_UMDStaticMeshCapture.InnerSingleton;
}
UClass* Z_Construct_UClass_UMDStaticMeshCapture_NoRegister()
{
	return UMDStaticMeshCapture::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMDStaticMeshCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshCapture/MDStaticMeshCapture.h" },
		{ "ModuleRelativePath", "Public/MeshCapture/MDStaticMeshCapture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_staticMeshComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeshCapture/MDStaticMeshCapture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_staticMeshComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMDStaticMeshCapture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMDStaticMeshCapture_Statics::NewProp_m_staticMeshComp = { "m_staticMeshComp", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMDStaticMeshCapture, m_staticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_staticMeshComp_MetaData), NewProp_m_staticMeshComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMDStaticMeshCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMDStaticMeshCapture_Statics::NewProp_m_staticMeshComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMDStaticMeshCapture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMDStaticMeshCapture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMDMeshCapture,
	(UObject* (*)())Z_Construct_UPackage__Script_MotionDiff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMDStaticMeshCapture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMDStaticMeshCapture_Statics::ClassParams = {
	&UMDStaticMeshCapture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMDStaticMeshCapture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMDStaticMeshCapture_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMDStaticMeshCapture_Statics::Class_MetaDataParams), Z_Construct_UClass_UMDStaticMeshCapture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMDStaticMeshCapture()
{
	if (!Z_Registration_Info_UClass_UMDStaticMeshCapture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMDStaticMeshCapture.OuterSingleton, Z_Construct_UClass_UMDStaticMeshCapture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMDStaticMeshCapture.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMDStaticMeshCapture);
UMDStaticMeshCapture::~UMDStaticMeshCapture() {}
// ********** End Class UMDStaticMeshCapture *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MeshCapture_MDStaticMeshCapture_h__Script_MotionDiff_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMDStaticMeshCapture, UMDStaticMeshCapture::StaticClass, TEXT("UMDStaticMeshCapture"), &Z_Registration_Info_UClass_UMDStaticMeshCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMDStaticMeshCapture), 4037796345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MeshCapture_MDStaticMeshCapture_h__Script_MotionDiff_3397500598(TEXT("/Script/MotionDiff"),
	Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MeshCapture_MDStaticMeshCapture_h__Script_MotionDiff_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MeshCapture_MDStaticMeshCapture_h__Script_MotionDiff_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
