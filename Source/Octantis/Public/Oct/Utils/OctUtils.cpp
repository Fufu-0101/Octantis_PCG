// Fill out your copyright notice in the Description page of Project Settings.


#include "Oct/Utils/OctUtils.h"


OctUtils::OctUtils()
{
}

OctUtils::~OctUtils()
{
}

void OctUtils::GetFolderFiles(const FString& Path, TArray<FString>& Files,FString Suffix="")
{
	if(Suffix=="")
	{
		IFileManager::Get().FindFiles(Files,*Path);	
	}
	else
	{
		IFileManager::Get().FindFiles(Files,*Path,*Suffix);
	}
	
}
