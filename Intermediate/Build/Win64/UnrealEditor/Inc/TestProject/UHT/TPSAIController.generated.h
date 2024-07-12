// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TPS/Play/TPSAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_TPSAIController_generated_h
#error "TPSAIController.generated.h already included, missing '#pragma once' in TPSAIController.h"
#endif
#define TESTPROJECT_TPSAIController_generated_h

#define FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSAIController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSAIController(); \
	friend struct Z_Construct_UClass_ATPSAIController_Statics; \
public: \
	DECLARE_CLASS(ATPSAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATPSAIController)


#define FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSAIController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATPSAIController(ATPSAIController&&); \
	ATPSAIController(const ATPSAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSAIController) \
	NO_API virtual ~ATPSAIController();


#define FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSAIController_h_12_PROLOG
#define FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSAIController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSAIController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class ATPSAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
