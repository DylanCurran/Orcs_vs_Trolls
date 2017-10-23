#include "Orc.h"

int Orc::health(int t_orc)
{
	switch (t_orc)
	{
	case 0: // Tank
		life = 100;
		break;
	case 1: // Flying Tank
		life = 80;
		break;
	case 2: // Air_DPS
		life = 15;
		break;
	case 3: // DPS
		life = 20;
		break;
	case 4: // Building
		life = 40;
		break;
	case 5: // anti_air
		life = 30;
		break;
	case 6: // swarm
		life = 2;
		break;
	default:
		std::cout << "I need healing" << std::endl;
		break;
	}
	return life;
	
}

std::string Orc::warCry(int t_orc)
{
	switch (t_orc)
	{
	case 0: // Tank
		entrance = "Ha ha ha I cannot be stopped.";
		break;
	case 1: // Flying Tank
		entrance = "Good luck getting me down there you dumb trolls.";
		break;
	case 2: // Air_DPS
		entrance = "I am the ruler of the skies.";
		break;
	case 3: // DPS
		entrance = "I will put you into the ground.";
		break;
	case 4: // Building
		entrance = "I am unbreakable.";
		break;
	case 5: // anti_air
		entrance = "The skies fear my presence";
		break;
	case 6: // swarm
		entrance = "We will swarm anyone that stands in our way";
		break;
	default:
		entrance = "Where are our troops?";
		break;
	}
	return entrance;
	
}



int Orc::spellCaster()
{
	return 0;
}

int Orc::damage(int t_orc)
{
	switch (t_orc)
	{
	case 0: // Tank
		inflictedDamage = 2;
		break;
	case 1: // Flying Tank
		inflictedDamage = 2;
		break;
	case 2: // Air_DPS
		inflictedDamage = 12;
		break;
	case 3: // DPS
		inflictedDamage = 15;
		break;
	case 4: // Building
		inflictedDamage = 5;
		break;
	case 5: // anti_air
		inflictedDamage = 6;
		break;
	case 6: // swarm
		inflictedDamage = 4;
		break;
	default:
		std::cout << "How can we do damage with no troops?" << std::endl;
		break;
	}
	return inflictedDamage;
}


bool Orc::flyingOrNot(int t_orc)
{
	switch (t_orc)
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
		std::cout << "It doesn't matter if anything flies if we have no troops." << std::endl;
		break;
	}
	return flying;
}
