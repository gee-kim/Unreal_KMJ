// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TPS/Play/AI/BTTPSTaskNode.h"
#include "BTTPSTaskNode_Idle.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API UBTTPSTaskNode_Idle : public UBTTPSTaskNode
{
	GENERATED_BODY()
	
public:

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& _OwnerComp, uint8* NodeMemory) override;

	void TickTask(UBehaviorTreeComponent& _OwnerComp, uint8* _pNodeMemory, float _DeltaSeconds) override;

};
