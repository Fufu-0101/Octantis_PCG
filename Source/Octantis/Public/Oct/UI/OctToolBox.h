// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

/**
 * 
 */
class OCTANTIS_API SOctToolBox : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SOctToolBox)
		{
		}
	SLATE_ARGUMENT(FString,ToolName)
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);
	FString ToolName;


};
