// Fill out your copyright notice in the Description page of Project Settings.


#include "Oct/UI/OctHdaToolWindow.h"

#include "SlateOptMacros.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SOctHdaToolWindow::Construct(const FArguments& InArgs)
{
	
	ChildSlot
	[
		SNew(SBorder)
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		.Padding(10)
		[
			SNew(SVerticalBox)
			+SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(STextBlock)
				.Text(FText::FromString("HDA TOOL UI"))
			]
		]
	];
	
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
