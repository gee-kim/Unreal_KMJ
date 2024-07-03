// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Global/GlobalCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_GlobalCharacter_generated_h
#error "GlobalCharacter.generated.h already included, missing '#pragma once' in GlobalCharacter.h"
#endif
#define TESTPROJECT_GlobalCharacter_generated_h

#define FID_TestProject_Source_TestProject_Global_GlobalCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGlobalCharacter(); \
	friend struct Z_Construct_UClass_AGlobalCharacter_Statics; \
public: \
	DECLARE_CLASS(AGlobalCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(AGlobalCharacter)


#define FID_TestProject_Source_TestProject_Global_GlobalCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGlobalCharacter(AGlobalCharacter&&); \
	AGlobalCharacter(const AGlobalCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGlobalCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGlobalCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGlobalCharacter) \
	NO_API virtual ~AGlobalCharacter();


#define FID_TestProject_Source_TestProject_Global_GlobalCharacter_h_9_PROLOG
#define FID_TestProject_Source_TestProject_Global_GlobalCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProject_Source_TestProject_Global_GlobalCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_TestProject_Source_TestProject_Global_GlobalCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class AGlobalCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProject_Source_TestProject_Global_GlobalCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
