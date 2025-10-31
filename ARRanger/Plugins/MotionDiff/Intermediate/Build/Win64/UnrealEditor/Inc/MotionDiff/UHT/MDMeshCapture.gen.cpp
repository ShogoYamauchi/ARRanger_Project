// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/MeshCapture/MDMeshCapture.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMDMeshCapture() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MOTIONDIFF_API UClass* Z_Construct_UClass_UMDMeshCapture();
MOTIONDIFF_API UClass* Z_Construct_UClass_UMDMeshCapture_NoRegister();
UPackage* Z_Construct_UPackage__Script_MotionDiff();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMDMeshCapture ***********************************************************
void UMDMeshCapture::StaticRegisterNativesUMDMeshCapture()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMDMeshCapture;
UClass* UMDMeshCapture::GetPrivateStaticClass()
{
	using TClass = UMDMeshCapture;
	if (!Z_Registration_Info_UClass_UMDMeshCapture.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MDMeshCapture"),
			Z_Registration_Info_UClass_UMDMeshCapture.InnerSingleton,
			StaticRegisterNativesUMDMeshCapture,
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
	return Z_Registration_Info_UClass_UMDMeshCapture.InnerSingleton;
}
UClass* Z_Construct_UClass_UMDMeshCapture_NoRegister()
{
	return UMDMeshCapture::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMDMeshCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshCapture/MDMeshCapture.h" },
		{ "ModuleRelativePath", "Public/MeshCapture/MDMeshCapture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMDMeshCapture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMDMeshCapture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MotionDiff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMDMeshCapture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMDMeshCapture_Statics::ClassParams = {
	&UMDMeshCapture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMDMeshCapture_Statics::Class_MetaDataParams), Z_Construct_UClass_UMDMeshCapture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMDMeshCapture()
{
	if (!Z_Registration_Info_UClass_UMDMeshCapture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMDMeshCapture.OuterSingleton, Z_Construct_UClass_UMDMeshCapture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMDMeshCapture.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMDMeshCapture);
UMDMeshCapture::~UMDMeshCapture() {}
// ********** End Class UMDMeshCapture *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MeshCapture_MDMeshCapture_h__Script_MotionDiff_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMDMeshCapture, UMDMeshCapture::StaticClass, TEXT("UMDMeshCapture"), &Z_Registration_Info_UClass_UMDMeshCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMDMeshCapture), 2652129459U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MeshCapture_MDMeshCapture_h__Script_MotionDiff_1481991795(TEXT("/Script/MotionDiff"),
	Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MeshCapture_MDMeshCapture_h__Script_MotionDiff_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MeshCapture_MDMeshCapture_h__Script_MotionDiff_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
