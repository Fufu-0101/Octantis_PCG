// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ToolBase.generated.h"

/**
 * 
 */

enum OctToolType
{
	OCT_ERROR_TYPE=-1,
	OCT_PYTHON_TYPE,
	OCT_HDA_TYPE,
	OCT_HIP_TYPE
};

UCLASS()
class OCTANTIS_API UToolBase : public UObject
{
	GENERATED_BODY()
protected:
	UToolBase();
	~UToolBase();
public:
	FString ToolName="";
	OctToolType ToolType=OCT_ERROR_TYPE;
	TSharedPtr<SCompoundWidget> ToolWindow;
	
public:
	bool virtual Init();
	
};
