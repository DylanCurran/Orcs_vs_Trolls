#include "game.h"

void Game::characterSelection()
{
	std::cout << "Who would you like to send in sir? We have a list of Seven characters for you to send in:" << std::endl;
	std::cout << "Option 0: We send in our own tanky troop to plunder their village as they hit ours." << std::endl;
	std::cout << "Option 1: We can send in a flying tanky troop to plunder their village." << std::endl;
	std::cout << "Option 2: We can send in a troop that heavily damages anything in the air" << std::endl;
	std::cout << "Option 3: We can send in a troop that  heavily damages anything on the ground" << std::endl;
	std::cout << "Option 4: We can make the troop go over to a building. (I don't know why they like buildings, they just do)" << std::endl;
	std::cout << "Option 5: We can put down a building that only targets air." << std::endl;
	std::cout << "Option 6: We can try swarm the troop if its on the ground with ours and hope it dies." << std::endl;
	std::cout << "Please Enter a whole number between 0 and 6 for your answer" << std::endl;

	
}

void Game::chosenCharacter(CharacterTypes character)
{
	switch (character)
	{
	case 0:
		character = TANK;
		break;
	case 1:
		character = AIR_TANK;
		break;
	case 2:
		character = AIR_DPS;
		break;
	case 3:
		character = DPS;
		break;
	case 4:
		character = BUILDING;
		break;
	case 5:
		character = ANTI_AIR;
		break;
	case 6:
		character = SWARM;
		break;
	default:
		std::cout << "Yeah that's not an option so stop wasting time, there is a war going on here!" << std::endl;
		break;
	}
}
