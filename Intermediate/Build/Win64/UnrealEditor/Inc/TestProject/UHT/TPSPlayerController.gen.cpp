// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TPS/Play/TPSPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
TESTPROJECT_API UClass* Z_Construct_UClass_ATPSPlayerController();
TESTPROJECT_API UClass* Z_Construct_UClass_ATPSPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class ATPSPlayerController
void ATPSPlayerController::StaticRegisterNativesATPSPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPSPlayerController);
UClass* Z_Construct_UClass_ATPSPlayerController_NoRegister()
{
	return ATPSPlayerController::StaticClass();
}
struct Z_Construct_UClass_ATPSPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TPS/Play/TPSPlayerController.h" },
		{ "ModuleRelativePath", "TPS/Play/TPSPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATPSPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPSPlayerController_Statics::ClassParams = {
	&ATPSPlayerController::StaticClass,
	"Game",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPSPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATPSPlayerController()
{
	if (!Z_Registration_Info_UClass_ATPSPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPSPlayerController.OuterSingleton, Z_Construct_UClass_ATPSPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATPSPlayerController.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<ATPSPlayerController>()
{
	return ATPSPlayerController::StaticClass();
}
ATPSPlayerController::ATPSPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSPlayerController);
ATPSPlayerController::~ATPSPlayerController() {}
// End Class ATPSPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATPSPlayerController, ATPSPlayerController::StaticClass, TEXT("ATPSPlayerController"), &Z_Registration_Info_UClass_ATPSPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPSPlayerController), 3565224673U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSPlayerController_h_974099344(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
