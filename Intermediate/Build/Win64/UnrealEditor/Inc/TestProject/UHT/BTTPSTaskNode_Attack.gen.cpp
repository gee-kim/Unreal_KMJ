// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TPS/Play/AI/BTTPSTaskNode_Attack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTPSTaskNode_Attack() {}

// Begin Cross Module References
TESTPROJECT_API UClass* Z_Construct_UClass_UBTTPSTaskNode();
TESTPROJECT_API UClass* Z_Construct_UClass_UBTTPSTaskNode_Attack();
TESTPROJECT_API UClass* Z_Construct_UClass_UBTTPSTaskNode_Attack_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class UBTTPSTaskNode_Attack
void UBTTPSTaskNode_Attack::StaticRegisterNativesUBTTPSTaskNode_Attack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTPSTaskNode_Attack);
UClass* Z_Construct_UClass_UBTTPSTaskNode_Attack_NoRegister()
{
	return UBTTPSTaskNode_Attack::StaticClass();
}
struct Z_Construct_UClass_UBTTPSTaskNode_Attack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TPS/Play/AI/BTTPSTaskNode_Attack.h" },
		{ "ModuleRelativePath", "TPS/Play/AI/BTTPSTaskNode_Attack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTPSTaskNode_Attack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTPSTaskNode_Attack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTPSTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTPSTaskNode_Attack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTPSTaskNode_Attack_Statics::ClassParams = {
	&UBTTPSTaskNode_Attack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTPSTaskNode_Attack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTPSTaskNode_Attack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTPSTaskNode_Attack()
{
	if (!Z_Registration_Info_UClass_UBTTPSTaskNode_Attack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTPSTaskNode_Attack.OuterSingleton, Z_Construct_UClass_UBTTPSTaskNode_Attack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTPSTaskNode_Attack.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<UBTTPSTaskNode_Attack>()
{
	return UBTTPSTaskNode_Attack::StaticClass();
}
UBTTPSTaskNode_Attack::UBTTPSTaskNode_Attack() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTPSTaskNode_Attack);
UBTTPSTaskNode_Attack::~UBTTPSTaskNode_Attack() {}
// End Class UBTTPSTaskNode_Attack

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TPS_Play_AI_BTTPSTaskNode_Attack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTPSTaskNode_Attack, UBTTPSTaskNode_Attack::StaticClass, TEXT("UBTTPSTaskNode_Attack"), &Z_Registration_Info_UClass_UBTTPSTaskNode_Attack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTPSTaskNode_Attack), 933234090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TPS_Play_AI_BTTPSTaskNode_Attack_h_1119770244(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TPS_Play_AI_BTTPSTaskNode_Attack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TPS_Play_AI_BTTPSTaskNode_Attack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
