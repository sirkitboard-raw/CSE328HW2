#include "sssf_VS\stdafx.h"
#include "sssf\gsm\sprite\TopDownSprite.h"

void TopDownSprite::updateSprite()
{
	// CALL THE PARENT METHOD TO UPDATE ANIMATION
	AnimatedSprite::updateSprite();

	// AND NOW CALCULATE THE RADIANS
	// FOR RENDERING THIS SPRITE
	float vX = pp.getVelocityX();
	float vY = pp.getVelocityY();
	float epsilon = 0.00001f;

	if (fabs(vX)<epsilon) {
		if (vY<0) {
			setCurrentState(WALK_S);
		}
		else {
			setCurrentState(WALK_N);
		}
	}
	else if (fabs(vY)<epsilon) {
		if (vX<0) {
			setCurrentState(WALK_W);
		}
		else {
			setCurrentState(WALK_E);
		}
	}
	else {
		if (vX > 0 && vY>0) {
			setCurrentState(WALK_NE);
		}
		else if (vX > 0 && vY<0) {
			setCurrentState(WALK_SE);
		}
		else if (vX < 0 && vY<0) {
			setCurrentState(WALK_SW);
		}
		else {
			setCurrentState(WALK_NW);
		}
	}

	// IF THE Y VELOCITY IS 0 WE HAVE TO BE CAREFUL DIVIDING
//	if (fabs(vY) < epsilon)
//	{
//		// IF X ISN'T MOVING EITHER, LEAVE IT WHAT IT IS
//		// AND PUT IT INTO AN IDLE STATE
//		if (fabs(vX) > epsilon)
//		{
//			if (vX < 0.0f)
//			{
//				rotationInRadians = PI;
//			}
//			else
//				rotationInRadians = 0.0f;
//		}
//	}
//	else
//	{
//		float tanTheta = vY/vX;
//		rotationInRadians = atan(tanTheta);
//		if (vX < 0.0f)
//		{
//			if (vY < 0.0f)
//				rotationInRadians += PI;
//			else
//				rotationInRadians -= PI;
//		}
//	}
}