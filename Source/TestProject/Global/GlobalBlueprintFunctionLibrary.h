// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Global/GlobalGameInstance.h"
#include "GameFramework/GameState.h"
#include "GlobalBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API UGlobalBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "Game", meta = (WorldContext = "WorldContextObject", UnsafeDuringActorConstruction = "true"))
	static class ATPSHUD* GetTPSPlayHUD(const UWorld* WorldContextObject);

	static UGlobalGameInstance* GetGlobalGameInstance(const UWorld* WorldContextObject);

};
