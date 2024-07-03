// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TPS/Play/TPSPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_TPSPlayerController_generated_h
#error "TPSPlayerController.generated.h already included, missing '#pragma once' in TPSPlayerController.h"
#endif
#define TESTPROJECT_TPSPlayerController_generated_h

#define FID_TestProject_Source_TestProject_TPS_Play_TPSPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSPlayerController(); \
	friend struct Z_Construct_UClass_ATPSPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATPSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATPSPlayerController)


#define FID_TestProject_Source_TestProject_TPS_Play_TPSPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATPSPlayerController(ATPSPlayerController&&); \
	ATPSPlayerController(const ATPSPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSPlayerController) \
	NO_API virtual ~ATPSPlayerController();


#define FID_TestProject_Source_TestProject_TPS_Play_TPSPlayerController_h_12_PROLOG
#define FID_TestProject_Source_TestProject_TPS_Play_TPSPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProject_Source_TestProject_TPS_Play_TPSPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_TestProject_Source_TestProject_TPS_Play_TPSPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class ATPSPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProject_Source_TestProject_TPS_Play_TPSPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
