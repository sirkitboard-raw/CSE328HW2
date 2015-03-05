#pragma once

// PREPROCESSOR INCLUDE STATEMENTS
#include "sssf_VS\stdafx.h"
#include "sssf\gsm\ai\Bot.h"
#include "sssf\gsm\physics\Physics.h"
#include "sssf\game\Game.h"

class Monster : public Bot {
private:

	// THIS PRIVATE CONSTRUCTOR IS ONLY USED FOR CLONING
	

public:
	Monster();
	Monster(Physics *physics);
	~Monster();
	Bot*	clone();
	void initBot();
	void	think(Game *game);

};