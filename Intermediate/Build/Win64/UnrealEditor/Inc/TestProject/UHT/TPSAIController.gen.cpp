// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TPS/Play/TPSAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
TESTPROJECT_API UClass* Z_Construct_UClass_ATPSAIController();
TESTPROJECT_API UClass* Z_Construct_UClass_ATPSAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class ATPSAIController
void ATPSAIController::StaticRegisterNativesATPSAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPSAIController);
UClass* Z_Construct_UClass_ATPSAIController_NoRegister()
{
	return ATPSAIController::StaticClass();
}
struct Z_Construct_UClass_ATPSAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TPS/Play/TPSAIController.h" },
		{ "ModuleRelativePath", "TPS/Play/TPSAIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATPSAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPSAIController_Statics::ClassParams = {
	&ATPSAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPSAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATPSAIController()
{
	if (!Z_Registration_Info_UClass_ATPSAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPSAIController.OuterSingleton, Z_Construct_UClass_ATPSAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATPSAIController.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<ATPSAIController>()
{
	return ATPSAIController::StaticClass();
}
ATPSAIController::ATPSAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSAIController);
ATPSAIController::~ATPSAIController() {}
// End Class ATPSAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TPS_Play_TPSAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATPSAIController, ATPSAIController::StaticClass, TEXT("ATPSAIController"), &Z_Registration_Info_UClass_ATPSAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPSAIController), 3326482334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TPS_Play_TPSAIController_h_3311962558(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TPS_Play_TPSAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TPS_Play_TPSAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
