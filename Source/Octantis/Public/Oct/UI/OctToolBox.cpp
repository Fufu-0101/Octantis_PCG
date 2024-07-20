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
			SNew(SBorder)
		.BorderBackgroundColor(FLinearColor::Gray)
		.Padding(10)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.AutoWidth()
			[
				SNew(SBox)
				.WidthOverride(100)
				.HeightOverride(100)
				[
					SNew(STextBlock)
					.Text(FText::FromString("ICON"))
					.ColorAndOpacity(FLinearColor::Red)
				]
			]
			+ SHorizontalBox::Slot()
			.FillWidth(1)
			[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SBox)
					.HAlign(HAlign_Fill)
					.VAlign(VAlign_Fill)
					.Padding(0,0,0,10)
					[
						SNew(STextBlock)
						.Text(FText::FromString(ToolName))
						.Font(FCoreStyle::GetDefaultFontStyle("Regular", 15))
						
						.ColorAndOpacity(FLinearColor::Gray)
					]
					
				]
				+ SVerticalBox::Slot()
				.FillHeight(1)
				[
					SNew(SBorder)
					.BorderBackgroundColor(FLinearColor(FColor(15, 15, 15)))
					[
						SNew(STextBlock)
						.Text(FText::FromString("Tips"))
						.ColorAndOpacity(FLinearColor::White)
					]
				]
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(STextBlock)
					.Text(FText::FromString("HELP"))
					.ColorAndOpacity(FLinearColor::Gray)
				]
				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SButton)
					.Text(FText::FromString("--LOAD--"))
					
				]
			]
		]
			// SNew(SButton)
			// .HAlign(HAlign_Fill)
			// .VAlign(VAlign_Fill)
			// .Text(FText::FromString(ToolName))
		]
	];

}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
