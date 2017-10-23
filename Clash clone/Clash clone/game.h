
#include <iostream>
#include "Character.h"
#ifndef GAME
#define GAME
class Game
{

public:
	enum CharacterTypes
	{
		TANK,
		AIR_TANK,
		AIR_DPS,
		DPS,
		BUILDING,
		ANTI_AIR,
		SWARM
	};
	Character character;
	void characterSelection();
	void chosenCharacter(CharacterTypes character);
};

#endif // GAME
