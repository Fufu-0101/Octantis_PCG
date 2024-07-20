// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class OCTANTIS_API OctUtils
{
public:
	OctUtils();
	~OctUtils();

	static void GetFolderFiles(const FString& Path,TArray<FString>& Files,FString Suffix);
};
