// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "UICreatedDataRow.generated.h"


/**
 * 
 */

USTRUCT(BlueprintType)
struct FUICreatedDataRow : public FTableRowBase
{
	GENERATED_BODY()

public:
	FUICreatedDataRow() {  }
	~FUICreatedDataRow() {	}

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resources")
	TSubclassOf<UUserWidget> objects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resources")
	bool StartOn = false;
};

