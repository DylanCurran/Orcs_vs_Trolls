#include <iostream>

#ifndef CHARACTER
#define CHARACTER

class Character
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
	
	virtual void health();
	virtual void warCry();
	virtual int spellCaster();
	virtual void damage();
	virtual void flyingOrNot();
	
	

private:
	bool chosenOrc = false;
};
#endif // Character
