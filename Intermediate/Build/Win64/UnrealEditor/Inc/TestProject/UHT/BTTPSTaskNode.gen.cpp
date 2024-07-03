// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TPS/Play/AI/BTTPSTaskNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTPSTaskNode() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
TESTPROJECT_API UClass* Z_Construct_UClass_UBTTPSTaskNode();
TESTPROJECT_API UClass* Z_Construct_UClass_UBTTPSTaskNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class UBTTPSTaskNode
void UBTTPSTaskNode::StaticRegisterNativesUBTTPSTaskNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTPSTaskNode);
UClass* Z_Construct_UClass_UBTTPSTaskNode_NoRegister()
{
	return UBTTPSTaskNode::StaticClass();
}
struct Z_Construct_UClass_UBTTPSTaskNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TPS/Play/AI/BTTPSTaskNode.h" },
		{ "ModuleRelativePath", "TPS/Play/AI/BTTPSTaskNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTPSTaskNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTPSTaskNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTPSTaskNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTPSTaskNode_Statics::ClassParams = {
	&UBTTPSTaskNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTPSTaskNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTPSTaskNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTPSTaskNode()
{
	if (!Z_Registration_Info_UClass_UBTTPSTaskNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTPSTaskNode.OuterSingleton, Z_Construct_UClass_UBTTPSTaskNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTPSTaskNode.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<UBTTPSTaskNode>()
{
	return UBTTPSTaskNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTPSTaskNode);
UBTTPSTaskNode::~UBTTPSTaskNode() {}
// End Class UBTTPSTaskNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TPS_Play_AI_BTTPSTaskNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTPSTaskNode, UBTTPSTaskNode::StaticClass, TEXT("UBTTPSTaskNode"), &Z_Registration_Info_UClass_UBTTPSTaskNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTPSTaskNode), 1279449062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TPS_Play_AI_BTTPSTaskNode_h_3721618376(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TPS_Play_AI_BTTPSTaskNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TPS_Play_AI_BTTPSTaskNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
