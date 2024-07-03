// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/Global/GlobalGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
TESTPROJECT_API UClass* Z_Construct_UClass_UGlobalGameInstance();
TESTPROJECT_API UClass* Z_Construct_UClass_UGlobalGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class UGlobalGameInstance
void UGlobalGameInstance::StaticRegisterNativesUGlobalGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGlobalGameInstance);
UClass* Z_Construct_UClass_UGlobalGameInstance_NoRegister()
{
	return UGlobalGameInstance::StaticClass();
}
struct Z_Construct_UClass_UGlobalGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Global/GlobalGameInstance.h" },
		{ "ModuleRelativePath", "Global/GlobalGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlobalGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGlobalGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGlobalGameInstance_Statics::ClassParams = {
	&UGlobalGameInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGlobalGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGlobalGameInstance()
{
	if (!Z_Registration_Info_UClass_UGlobalGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGlobalGameInstance.OuterSingleton, Z_Construct_UClass_UGlobalGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGlobalGameInstance.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<UGlobalGameInstance>()
{
	return UGlobalGameInstance::StaticClass();
}
UGlobalGameInstance::UGlobalGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGlobalGameInstance);
UGlobalGameInstance::~UGlobalGameInstance() {}
// End Class UGlobalGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_GlobalGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGlobalGameInstance, UGlobalGameInstance::StaticClass, TEXT("UGlobalGameInstance"), &Z_Registration_Info_UClass_UGlobalGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGlobalGameInstance), 1379069229U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_GlobalGameInstance_h_2471570457(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_GlobalGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_GlobalGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
