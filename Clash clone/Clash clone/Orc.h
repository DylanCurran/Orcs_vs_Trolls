#include <iostream>
#include "Character.h"
#ifndef ORC
#define ORC

class Orc : public Character
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
	Orc() = default;
	int health(int t_orc);
	std::string warCry(int t_orc);
	int spellCaster();
	int damage(int t_orc);
	bool flyingOrNot(int t_orc);
	
	
private:
	int life = 0;
	std::string entrance = "";
	int inflictedDamage = 0;
	bool flying = false;
};
#endif // ORC