// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TPSUIEnum.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class ETPSPlayUIType : uint8
{
	Inventory,
	Status,
	MiniMap,
};

UCLASS()
class TESTPROJECT_API UTPSUIEnum : public UObject
{
	GENERATED_BODY()
	
};
