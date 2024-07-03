// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TPS/Play/AI/BTTPSTaskNode_Patrol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTPSTaskNode_Patrol() {}

// Begin Cross Module References
TESTPROJECT_API UClass* Z_Construct_UClass_UBTTPSTaskNode();
TESTPROJECT_API UClass* Z_Construct_UClass_UBTTPSTaskNode_Patrol();
TESTPROJECT_API UClass* Z_Construct_UClass_UBTTPSTaskNode_Patrol_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class UBTTPSTaskNode_Patrol
void UBTTPSTaskNode_Patrol::StaticRegisterNativesUBTTPSTaskNode_Patrol()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTPSTaskNode_Patrol);
UClass* Z_Construct_UClass_UBTTPSTaskNode_Patrol_NoRegister()
{
	return UBTTPSTaskNode_Patrol::StaticClass();
}
struct Z_Construct_UClass_UBTTPSTaskNode_Patrol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TPS/Play/AI/BTTPSTaskNode_Patrol.h" },
		{ "ModuleRelativePath", "TPS/Play/AI/BTTPSTaskNode_Patrol.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTPSTaskNode_Patrol>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTPSTaskNode_Patrol_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTPSTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTPSTaskNode_Patrol_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTPSTaskNode_Patrol_Statics::ClassParams = {
	&UBTTPSTaskNode_Patrol::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTPSTaskNode_Patrol_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTPSTaskNode_Patrol_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTPSTaskNode_Patrol()
{
	if (!Z_Registration_Info_UClass_UBTTPSTaskNode_Patrol.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTPSTaskNode_Patrol.OuterSingleton, Z_Construct_UClass_UBTTPSTaskNode_Patrol_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTPSTaskNode_Patrol.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<UBTTPSTaskNode_Patrol>()
{
	return UBTTPSTaskNode_Patrol::StaticClass();
}
UBTTPSTaskNode_Patrol::UBTTPSTaskNode_Patrol() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTPSTaskNode_Patrol);
UBTTPSTaskNode_Patrol::~UBTTPSTaskNode_Patrol() {}
// End Class UBTTPSTaskNode_Patrol

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TPS_Play_AI_BTTPSTaskNode_Patrol_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTPSTaskNode_Patrol, UBTTPSTaskNode_Patrol::StaticClass, TEXT("UBTTPSTaskNode_Patrol"), &Z_Registration_Info_UClass_UBTTPSTaskNode_Patrol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTPSTaskNode_Patrol), 1828975634U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TPS_Play_AI_BTTPSTaskNode_Patrol_h_111017226(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TPS_Play_AI_BTTPSTaskNode_Patrol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TPS_Play_AI_BTTPSTaskNode_Patrol_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
