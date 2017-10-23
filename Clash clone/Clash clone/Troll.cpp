#include "Troll.h"

int Troll::health(int t_troll)
{
	switch (t_troll)
	{
	case 0: // Tank
		life = 150;
		break;
	case 1: // Flying Tank
		life = 120;
		break;
	case 2: // Air_DPS
		life = 50;
		break;
	case 3: // DPS
		life = 60;
		break;
	case 4: // Building
		life = 40;
		break;
	case 5: // anti_air
		life = 30;
		break;
	case 6: // swarm
		life = 5;
		break;
	default:
		std::cout << "What do we do, we have no troops to deploy?" << std::endl;
		break;
	}
	return life;
}

std::string Troll::warCry(int t_troll)
{
	switch (t_troll)
	{
	case 0: // Tank
		entrance = " Ha ha ha please your weapons do nothing to me.";
		break;
	case 1: // Flying Tank
		entrance = "Good luck getting me down there you stupid orcs.";
		break;
	case 2: // Air_DPS
		entrance = "The sky is my domain";
		break;
	case 3: // DPS
		entrance = "Looks like you guys are getting grounded";
		break;
	case 4: // Building
		entrance = "Come on over...... TO DIE!";
		break;
	case 5: // anti_air
		entrance = "I made chicken little think the sky was falling";
		break;
	case 6: // swarm
		entrance = "We overwealm the realm";
		break;
	default:
		std::cout << "*Ahem*. It appears we have no troops sir." << std::endl;
		break;
	}
	return entrance;
}

int Troll::spellCaster()
{
	return 0;
}

int Troll::damage(int t_troll)
{
	switch (t_troll)
	{
	case 0: // Tank
		inflictedDamage = 1;
		break;
	case 1: // Flying Tank
		inflictedDamage = 1;
		break;
	case 2: // Air_DPS
		inflictedDamage = 8;
		break;
	case 3: // DPS
		inflictedDamage = 10;
		break;
	case 4: // Building
		inflictedDamage = 4;
		break;
	case 5: // anti_air
		inflictedDamage = 5;
		break;
	case 6: // swarm
		inflictedDamage = 2;
		break;
	default:
		std::cout << "We cannot do damage without our valuable troops" << std::endl;
		break;
	}
	return inflictedDamage;
}

bool Troll::flyingOrNot(int t_troll)
{
	switch (t_troll)
	{
	case 0: // Tank
		flying = false;
		break;
	case 1: // Flying Tank
		flying = true;
		break;
	case 2: // Air_DPS
		flying = true;
		break;
	case 3: // DPS
		flying = false;
		break;
	case 4: // Building
		flying = false;
		break;
	case 5: // anti_air
		flying = false;
		break;
	case 6: // swarm
		flying = false;
		break;
	default:
		std::cout << "We need troops, lets not worry about flying yet" << std::endl;
		break;
	}
	return flying;
}
