// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TPS/Play/TPSPlayCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_TPSPlayCharacter_generated_h
#error "TPSPlayCharacter.generated.h already included, missing '#pragma once' in TPSPlayCharacter.h"
#endif
#define TESTPROJECT_TPSPlayCharacter_generated_h

#define FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSPlayCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSPlayCharacter(); \
	friend struct Z_Construct_UClass_ATPSPlayCharacter_Statics; \
public: \
	DECLARE_CLASS(ATPSPlayCharacter, AGlobalCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATPSPlayCharacter)


#define FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSPlayCharacter_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSPlayCharacter(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATPSPlayCharacter(ATPSPlayCharacter&&); \
	ATPSPlayCharacter(const ATPSPlayCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSPlayCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSPlayCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPSPlayCharacter) \
	NO_API virtual ~ATPSPlayCharacter();


#define FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSPlayCharacter_h_14_PROLOG
#define FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSPlayCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSPlayCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSPlayCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class ATPSPlayCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSPlayCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
