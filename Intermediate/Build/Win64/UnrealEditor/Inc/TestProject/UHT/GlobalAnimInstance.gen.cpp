// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/Global/Animation/GlobalAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
TESTPROJECT_API UClass* Z_Construct_UClass_UGlobalAnimInstance();
TESTPROJECT_API UClass* Z_Construct_UClass_UGlobalAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class UGlobalAnimInstance
void UGlobalAnimInstance::StaticRegisterNativesUGlobalAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGlobalAnimInstance);
UClass* Z_Construct_UClass_UGlobalAnimInstance_NoRegister()
{
	return UGlobalAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UGlobalAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Global/Animation/GlobalAnimInstance.h" },
		{ "ModuleRelativePath", "Global/Animation/GlobalAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontages_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GlobalAnimInstance" },
		{ "ModuleRelativePath", "Global/Animation/GlobalAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontages_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimMontages_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AnimMontages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlobalAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGlobalAnimInstance_Statics::NewProp_AnimMontages_ValueProp = { "AnimMontages", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGlobalAnimInstance_Statics::NewProp_AnimMontages_Key_KeyProp = { "AnimMontages_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGlobalAnimInstance_Statics::NewProp_AnimMontages = { "AnimMontages", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGlobalAnimInstance, AnimMontages), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimMontages_MetaData), NewProp_AnimMontages_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGlobalAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalAnimInstance_Statics::NewProp_AnimMontages_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalAnimInstance_Statics::NewProp_AnimMontages_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalAnimInstance_Statics::NewProp_AnimMontages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGlobalAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGlobalAnimInstance_Statics::ClassParams = {
	&UGlobalAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGlobalAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGlobalAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGlobalAnimInstance()
{
	if (!Z_Registration_Info_UClass_UGlobalAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGlobalAnimInstance.OuterSingleton, Z_Construct_UClass_UGlobalAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGlobalAnimInstance.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<UGlobalAnimInstance>()
{
	return UGlobalAnimInstance::StaticClass();
}
UGlobalAnimInstance::UGlobalAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGlobalAnimInstance);
UGlobalAnimInstance::~UGlobalAnimInstance() {}
// End Class UGlobalAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_Global_Animation_GlobalAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGlobalAnimInstance, UGlobalAnimInstance::StaticClass, TEXT("UGlobalAnimInstance"), &Z_Registration_Info_UClass_UGlobalAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGlobalAnimInstance), 2556532977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_Global_Animation_GlobalAnimInstance_h_2063375930(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_Global_Animation_GlobalAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_Global_Animation_GlobalAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
