// Fill out your copyright notice in the Description page of Project Settings.


#include "Oct/UI/OctToolBox.h"

#include "SlateOptMacros.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SOctToolBox::Construct(const FArguments& InArgs)
{
	ToolName=InArgs._ToolName;

	ChildSlot
	[
		SNew(SBorder)
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		[
			SNew(SButton)
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			.Text(FText::FromString(ToolName))
		]
	];

}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
