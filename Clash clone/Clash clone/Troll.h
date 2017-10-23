#include <iostream>
#include "Character.h"
#ifndef TROLL
#define TROLL

class Troll : public Character
{
public:
	enum CharacterSelect
	{
		TANK,
		FLYING_TANK,
		AIR_DPS,
		DPS,
		BUILDING,
		ANTI_AIR,
		SWARM
	};
	Troll() = default;
	int health(int t_troll);
	std::string warCry(int t_troll);
	int spellCaster();
	int damage(int t_troll);
	bool flyingOrNot(int t_troll);
	
private:
	int life = 0;
	std::string entrance = "";
	int inflictedDamage = 0;
	bool flying = false;
};
#endif // TROLL
