// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TPS/Play/TPSAIController.h"
#include "BTTPSTaskNode.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API UBTTPSTaskNode : public UBTTaskNode
{
	GENERATED_BODY()

public:

	UBTTPSTaskNode();

	//EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& _OwnerComp, uint8* NodeMemory);

	//void TickTask(UBehaviorTreeComponent& _OwnerComp, uint8 _pNodeMemory, float _DeltaSeconds);

	AController* GetController(UBehaviorTreeComponent& _OwnerComp);
	
};
