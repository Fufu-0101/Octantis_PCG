// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tools/ToolBase.h"
#include "UI/OctWindow.h"
#include "UObject/Object.h"
#include "OctantisApp.generated.h"

/**
 * 
 */
UCLASS()
class OCTANTIS_API UOctantisApp : public UObject
{
	GENERATED_BODY()
public:
	UOctantisApp();
	~UOctantisApp();

public:
	TSharedPtr<SOctWindow> OctMainWindow;
	TArray<UToolBase*> OctTools={};
	UToolBase* CurrentTools=nullptr;
	
};
