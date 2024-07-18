// Fill out your copyright notice in the Description page of Project Settings.


#include "Oct/UI/OctWindow.h"

#include "EditorModeManager.h"
#include "SlateOptMacros.h"
#include "Oct/OctEdMode/OctEdModeDefault.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SOctWindow::Construct(const FArguments& InArgs)
{
	ListItems.Empty();
	ListItems.Add(MakeShareable(new FString(TEXT("Item 1"))));
	ListItems.Add(MakeShareable(new FString(TEXT("Item 2"))));
	ListItems.Add(MakeShareable(new FString(TEXT("Item 3"))));

	ToolType.Empty();
	ToolType.Add(MakeShareable(new FString("ALL")));
	ToolType.Add(MakeShareable(new FString("HIP")));
	ToolType.Add(MakeShareable(new FString("HDA")));
	ToolType.Add(MakeShareable(new FString("CMD")));
	

	
	ChildSlot
	[
		SNew(SBorder)
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		.Padding(10)
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.AutoWidth()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			[
				SNew(SBorder)
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				.Padding(0)
				.BorderBackgroundColor(FSlateColor(FColor(36, 36, 36)))
				.ForegroundColor(FSlateColor(FColor(36, 36, 36)))
				[
					SNew(SListView<TSharedPtr<FString>>)
					.ItemHeight(100)
					.ListItemsSource(&ToolType)
					.OnGenerateRow_Lambda([](TSharedPtr<FString> InItem,const TSharedRef< class STableViewBase>& Owner)
					{
						return SNew(STableRow<TSharedPtr<FString>>,Owner)
							[
								SNew(SBox)
								.Padding(0)
								.MinDesiredHeight(100)
								.MaxDesiredHeight(100)
								.MinDesiredWidth(100)
								.MaxDesiredWidth(100)
								[
									SNew(SButton)
									.HAlign(HAlign_Center)
									.VAlign(VAlign_Center)
									.Text(FText::FromString(*InItem))
								]
								
							];
					})
				]
				
			]
			+SHorizontalBox::Slot()
			.Padding(10)
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			.FillWidth(4)
			[

				SNew(SVerticalBox)
				+SVerticalBox::Slot()
				.AutoHeight()
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				.Padding(10,10,10,2)
				[
					SNew(SBox)
					.MaxDesiredHeight(20)
					.MinDesiredHeight(20)
					[
						SNew(SBorder)
						.HAlign(HAlign_Fill)
						.VAlign(VAlign_Fill)
						[
							SNew(SEditableText)
						]
					]
					
				]
				+SVerticalBox::Slot()
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				.AutoHeight()
				.Padding(10)
				[
					// SNew(SListView<TSharedPtr<FString>>)
					// .ItemHeight(30)
					// .ListItemsSource(&ListItems)
					// .OnGenerateRow_Lambda([](TSharedPtr<FString> InItem,const TSharedRef< class STableViewBase >& Owner)
					// {
					// 	return SNew(STableRow<TSharedPtr<FString>>,Owner)
					// 		[
					// 			SNew(SButton)
					// 			.HAlign(HAlign_Center)
					// 			.VAlign(VAlign_Top)
					// 			.Text(FText::FromString(*InItem))	
					// 		];
					// })
					SNew(SBox)
					.HAlign(HAlign_Fill)
					.VAlign(VAlign_Fill)
					.MinDesiredHeight(50)
					[
						SNew(SButton)
						.HAlign(HAlign_Fill)
						.VAlign(VAlign_Fill)
						.OnClicked_Lambda([this]()->FReply 
						{
							this->ClickBtn();
							return  FReply::Handled();
						})
						[
							SNew(SBox)
							.HAlign(HAlign_Center)
							.VAlign(VAlign_Center)
							[
								SNew(STextBlock)
								.Text(FText::FromString("TstBtn"))	
							]
						]
					]
				]
			]
		]
	];
	
}
void SOctWindow::ClickBtn()
{
	UE_LOG(LogTemp,Error,TEXT("Click!"));
	GLevelEditorModeTools().ActivateMode(FOctEdModeDefault::EM_OctEdModeId);
	
	
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
