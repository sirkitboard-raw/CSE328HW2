#include "sssf_VS\stdafx.h"
#include "sssf\game\Game.h"
#include "sssf\gsm\state\GameStateManager.h"
#include "sssf\gsm\physics\Physics.h"
#include "Monster.h"

/*
This private constructor is only to be used for cloning bots, note
that this does not setup the velocity for this bot.
*/
Monster::Monster()
{
	// INIT THE BASIC STUFF
	initBot();
	pp.setVelocity(0.0f, 0.0f);
}

/*
This is the public constructor used by other classes for
creating these types of bots.
*/
Monster::Monster(Physics *physics)
{
	this->pp.setVelocity(0, 0);
}

/*
clone - this method makes another Monster object, but does
not completely initialize it with similar data to this. Most of the
object, like velocity and position, are left uninitialized.
*/
Bot* Monster::clone()
{
	Monster *botClone = new Monster();
	return botClone;
}

/*
initBot - this initialization method sets up the basic bot
properties, but does not setup its velocity.
*/
void Monster::initBot()
{
	
}

void Monster::think(Game *game)
{
	// EACH FRAME WE'LL TEST THIS BOT TO SEE IF WE NEED
	// TO PICK A DIFFERENT DIRECTION TO FLOAT IN
	float vX = pp.getVelocityX();
	float vY = pp.getVelocityY();
	pp.setX(pp.getX() + vX);
	pp.setY(pp.getY() + vY);
	affixTightAABBBoundingVolume();
}
