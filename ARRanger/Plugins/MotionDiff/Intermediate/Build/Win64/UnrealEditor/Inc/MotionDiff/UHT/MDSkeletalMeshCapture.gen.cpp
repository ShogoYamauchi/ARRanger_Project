// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/MeshCapture/MDSkeletalMeshCapture.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMDSkeletalMeshCapture() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
MOTIONDIFF_API UClass* Z_Construct_UClass_UMDMeshCapture();
MOTIONDIFF_API UClass* Z_Construct_UClass_UMDSkeletalMeshCapture();
MOTIONDIFF_API UClass* Z_Construct_UClass_UMDSkeletalMeshCapture_NoRegister();
UPackage* Z_Construct_UPackage__Script_MotionDiff();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMDSkeletalMeshCapture ***************************************************
void UMDSkeletalMeshCapture::StaticRegisterNativesUMDSkeletalMeshCapture()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMDSkeletalMeshCapture;
UClass* UMDSkeletalMeshCapture::GetPrivateStaticClass()
{
	using TClass = UMDSkeletalMeshCapture;
	if (!Z_Registration_Info_UClass_UMDSkeletalMeshCapture.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MDSkeletalMeshCapture"),
			Z_Registration_Info_UClass_UMDSkeletalMeshCapture.InnerSingleton,
			StaticRegisterNativesUMDSkeletalMeshCapture,
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
	return Z_Registration_Info_UClass_UMDSkeletalMeshCapture.InnerSingleton;
}
UClass* Z_Construct_UClass_UMDSkeletalMeshCapture_NoRegister()
{
	return UMDSkeletalMeshCapture::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMDSkeletalMeshCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshCapture/MDSkeletalMeshCapture.h" },
		{ "ModuleRelativePath", "Public/MeshCapture/MDSkeletalMeshCapture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_skeletalMeshComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeshCapture/MDSkeletalMeshCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_snapshotActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshCapture/MDSkeletalMeshCapture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_skeletalMeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_snapshotActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_m_snapshotActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMDSkeletalMeshCapture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMDSkeletalMeshCapture_Statics::NewProp_m_skeletalMeshComp = { "m_skeletalMeshComp", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMDSkeletalMeshCapture, m_skeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_skeletalMeshComp_MetaData), NewProp_m_skeletalMeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMDSkeletalMeshCapture_Statics::NewProp_m_snapshotActors_Inner = { "m_snapshotActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMDSkeletalMeshCapture_Statics::NewProp_m_snapshotActors = { "m_snapshotActors", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMDSkeletalMeshCapture, m_snapshotActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_snapshotActors_MetaData), NewProp_m_snapshotActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMDSkeletalMeshCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMDSkeletalMeshCapture_Statics::NewProp_m_skeletalMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMDSkeletalMeshCapture_Statics::NewProp_m_snapshotActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMDSkeletalMeshCapture_Statics::NewProp_m_snapshotActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMDSkeletalMeshCapture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMDSkeletalMeshCapture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMDMeshCapture,
	(UObject* (*)())Z_Construct_UPackage__Script_MotionDiff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMDSkeletalMeshCapture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMDSkeletalMeshCapture_Statics::ClassParams = {
	&UMDSkeletalMeshCapture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMDSkeletalMeshCapture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMDSkeletalMeshCapture_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMDSkeletalMeshCapture_Statics::Class_MetaDataParams), Z_Construct_UClass_UMDSkeletalMeshCapture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMDSkeletalMeshCapture()
{
	if (!Z_Registration_Info_UClass_UMDSkeletalMeshCapture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMDSkeletalMeshCapture.OuterSingleton, Z_Construct_UClass_UMDSkeletalMeshCapture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMDSkeletalMeshCapture.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMDSkeletalMeshCapture);
UMDSkeletalMeshCapture::~UMDSkeletalMeshCapture() {}
// ********** End Class UMDSkeletalMeshCapture *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MeshCapture_MDSkeletalMeshCapture_h__Script_MotionDiff_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMDSkeletalMeshCapture, UMDSkeletalMeshCapture::StaticClass, TEXT("UMDSkeletalMeshCapture"), &Z_Registration_Info_UClass_UMDSkeletalMeshCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMDSkeletalMeshCapture), 4090248413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MeshCapture_MDSkeletalMeshCapture_h__Script_MotionDiff_3509420897(TEXT("/Script/MotionDiff"),
	Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MeshCapture_MDSkeletalMeshCapture_h__Script_MotionDiff_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ARRanger_Plugins_MotionDiff_Source_MotionDiff_Public_MeshCapture_MDSkeletalMeshCapture_h__Script_MotionDiff_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
