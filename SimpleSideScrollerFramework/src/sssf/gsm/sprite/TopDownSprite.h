#pragma once

#include "sssf\gsm\sprite\AnimatedSprite.h"

static const wstring	WALK_S(L"WALK_SOUTH");
static const wstring	WALK_SE(L"WALK_SOUTH_EAST");
static const wstring	WALK_E(L"WALK_EAST");
static const wstring	WALK_NE(L"WALK_NORTH_EAST");
static const wstring	WALK_N(L"WALK_NORTH");
static const wstring	WALK_NW(L"WALK_NORTH_WEST");
static const wstring	WALK_W(L"WALK_WEST");
static const wstring	WALK_SW(L"WALK_SOUTH_WEST");

class TopDownSprite : public AnimatedSprite
{
	
protected:
	// USED TO RENDER A ROTATED SPRITE, NOT INVOLVED IN PHYSICS
	float rotationInRadians;

public:	
	float getRotationInRadians()	
	{ return rotationInRadians; }	
	void setRotationInRadians(float initRotation)
	{ rotationInRadians = initRotation; }
	void updateSprite();
};