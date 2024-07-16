// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Global/UICreatedDataRow.h"
#include "GlobalGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API UGlobalGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	TMap<FString, FUICreatedDataRow>& GetTPSPlayWidgets()
	{
		return TPSPlayWidgets;
	}

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UDataTable* UICreatedDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TMap<FString, FUICreatedDataRow> TPSPlayWidgets;
};
