// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

/**
 * 
 */
enum OctToolTypeEnum
{
	ALL_DIS,
	HIP_DIS,
	HDA_DIS,
	CMD_DIS
};


class OCTANTIS_API SOctWindow : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SOctWindow)
		{
		}

	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

	TArray<TSharedPtr<FString>> HIPTools;
	TArray<TSharedPtr<FString>> HDATools;
	TArray<TSharedPtr<FString>> CMDTools;

	
	TArray<TSharedPtr<FString>> CurrentTools;

	
	TArray<TSharedPtr<OctToolTypeEnum> > ToolType;
	OctToolTypeEnum CurrentDisplayType=ALL_DIS;

	bool InitHIPTools();
	bool InitHDATools();
	bool InitCMDTools();

	bool InitCurrentTools();
	
	
	TSharedPtr<FString> ToolsScanPath;

	TSharedPtr<SListView<TSharedPtr<FString>>> ToolsListView;


	static bool OctToolTypeEnumToString(TSharedPtr<OctToolTypeEnum> InEnum,FString& OutValue );
	


};

