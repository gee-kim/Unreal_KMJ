// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TPS/Play/AI/BTTPSTaskNode_Idle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTPSTaskNode_Idle() {}

// Begin Cross Module References
TESTPROJECT_API UClass* Z_Construct_UClass_UBTTPSTaskNode();
TESTPROJECT_API UClass* Z_Construct_UClass_UBTTPSTaskNode_Idle();
TESTPROJECT_API UClass* Z_Construct_UClass_UBTTPSTaskNode_Idle_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class UBTTPSTaskNode_Idle
void UBTTPSTaskNode_Idle::StaticRegisterNativesUBTTPSTaskNode_Idle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTPSTaskNode_Idle);
UClass* Z_Construct_UClass_UBTTPSTaskNode_Idle_NoRegister()
{
	return UBTTPSTaskNode_Idle::StaticClass();
}
struct Z_Construct_UClass_UBTTPSTaskNode_Idle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TPS/Play/AI/BTTPSTaskNode_Idle.h" },
		{ "ModuleRelativePath", "TPS/Play/AI/BTTPSTaskNode_Idle.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTPSTaskNode_Idle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTPSTaskNode_Idle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTPSTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTPSTaskNode_Idle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTPSTaskNode_Idle_Statics::ClassParams = {
	&UBTTPSTaskNode_Idle::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTPSTaskNode_Idle_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTPSTaskNode_Idle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTPSTaskNode_Idle()
{
	if (!Z_Registration_Info_UClass_UBTTPSTaskNode_Idle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTPSTaskNode_Idle.OuterSingleton, Z_Construct_UClass_UBTTPSTaskNode_Idle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTPSTaskNode_Idle.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<UBTTPSTaskNode_Idle>()
{
	return UBTTPSTaskNode_Idle::StaticClass();
}
UBTTPSTaskNode_Idle::UBTTPSTaskNode_Idle() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTPSTaskNode_Idle);
UBTTPSTaskNode_Idle::~UBTTPSTaskNode_Idle() {}
// End Class UBTTPSTaskNode_Idle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Play_AI_BTTPSTaskNode_Idle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTPSTaskNode_Idle, UBTTPSTaskNode_Idle::StaticClass, TEXT("UBTTPSTaskNode_Idle"), &Z_Registration_Info_UClass_UBTTPSTaskNode_Idle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTPSTaskNode_Idle), 3561414948U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Play_AI_BTTPSTaskNode_Idle_h_3994132382(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Play_AI_BTTPSTaskNode_Idle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Play_AI_BTTPSTaskNode_Idle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
