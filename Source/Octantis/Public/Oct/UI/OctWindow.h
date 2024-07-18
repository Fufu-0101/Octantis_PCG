// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

/**
 * 
 */
class OCTANTIS_API SOctWindow : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SOctWindow)
		{
		}

	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

	TArray<TSharedPtr<FString>> ListItems;
	TArray<TSharedPtr<FString>> ToolType;

	void ClickBtn();

};
