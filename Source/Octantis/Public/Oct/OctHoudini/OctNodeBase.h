// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OctNodeBase.generated.h"

/**
 * Houdini Node Object
 */
UCLASS()
class OCTANTIS_API UOctNodeBase : public UObject
{
	GENERATED_BODY()
public:
	
private:
	int32 NodeId=-1;
	FString NodeTypeName="";
	FString NodeLabel="";
	
	
};
