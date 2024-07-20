// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * Different Oct Editor Mode.(Curve/Mask...)
 */
class OCTANTIS_API OctModeBase
{
public:
	OctModeBase();
	~OctModeBase();

public:
	virtual bool Tick();
	virtual bool Render();

	virtual OctModeBase* GetLinkOctNode(){return LinkOctNode;}
private:
	OctModeBase* LinkOctNode;

};
