// Fill out your copyright notice in the Description page of Project Settings.


#include "TPS/Play/AI/BTTPSTaskNode.h"

UBTTPSTaskNode::UBTTPSTaskNode()
{
	bNotifyTick = false;
	//bNotifyTaskFinished
}

AController* UBTTPSTaskNode::GetController(UBehaviorTreeComponent& _OwnerComp)
{
	return Cast<AController>(_OwnerComp.GetOwner());
}

