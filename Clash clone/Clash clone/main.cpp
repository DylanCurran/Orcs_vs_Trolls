/// <summary>
/// Empty Project for SFML[2.4.2]
/// 
/// 
/// @author Peter Lowe
/// @date May 21017
/// </summary>

#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 


#include "game.h"
#include "Troll.h"
#include "Orc.h"
#include <iostream>
#include <string.h>
/// <summary>
/// main enrtry point
/// </summary>
/// <returns>zero</returns>
int main()
{
	Game game;
	Troll troll;
	Orc orc;
	int valueIn = 0;
	int healthPoints = 0;
	int damageDone = 0;
	std::string battleCry = "";
	bool valueCheck = false;
	bool orcChosen = false;
	while (valueCheck == false)
	{
		std::cout << "Welcome to the batlle of the century: Orcs vs Trolls. Which side would you like to choose?" << std::endl;
		std::cout << "(1 is Orcs, 2 is Trolls)" << std::endl;
		std::cin >> valueIn;
		std::cout << std::endl;
		
		if (valueIn == 1)
		{
			std::cout << "Welcome to the side of the Orcs. We believe that you can lead us to victory." << std::endl;
			system("pause");
			orcChosen = true;
			valueCheck = true;
			break;
		}
		else if (valueIn == 2)
		{
			std::cout << "Welcome to our side: The Troll Army. We hope you can help us in this war." << std::endl;
			system("pause");
			orcChosen = false;
			valueCheck = true;
			break;
		}
		else
		{
			std::cout << "That input was not valid. Please try again" << std::endl;
			system("pause");
		}
		system("CLS");
	}
	std::cout << "The Battle is beginning sir what shall we do they are sending out their tankiest troop (Most hp) on the ground" << std::endl;
	
	if (orcChosen)
	{
		
		game.characterSelection();
		std::cin >> valueIn;
		
		orc.health(valueIn);
		orc.damage(valueIn);
		orc.warCry(valueIn);
		orc.flyingOrNot(valueIn);
	}
	else
	{
		game.characterSelection();
		std::cin >> valueIn;
		troll.health(valueIn);
		troll.damage(valueIn);
		troll.warCry(valueIn);
		troll.flyingOrNot(valueIn);
	}
	

	std::cout << "Ok these are the statistics of the troop you are fighting" << std::endl;

	if (orcChosen)
	{
		healthPoints = troll.health(0);
		damageDone = troll.damage(0);
		battleCry = troll.warCry(0);
		std::cout << "The troll's life is: " << healthPoints << std::endl;
		std::cout << "The troll's damage  (only hits buildings) is: " << damageDone << std::endl;
		if (troll.flyingOrNot(valueIn))
		{
			std::cout << "This troop is not flying" << std::endl;
		}
		else
		{
																		
		}																
		{																
			std::cout << "This troop cannot fly" << std::endl;			
		}																
	}
	else
	{
		healthPoints = orc.health(0);
		damageDone = orc.health(0);
		std::cout << "The orc's life is: " << healthPoints << std::endl;
		std::cout << "The orc's damage  (only hits buildings) is: " << damageDone << std::endl;
		
		if (orc.flyingOrNot(valueIn))
		{
			std::cout << "This troop is not flying" << std::endl;
		}
		else
		{
			std::cout << "This troop cannot fly" << std::endl;
		}
	}
	system("pause");

	if (valueIn == 3)
	{
		std::cout << "Well that tamk got destroyed easily. Nice job" << std::endl;
	}
	else if (valueIn == 6)
	{
		std::cout << "That swarm was risky but luckily it did enough damage to kill that strong guy" << std::endl;
	}
	else if (valueIn == 4)
	{
		std::cout << "you got him with the building. Nice defensive move" << std::endl;
	}
	else
	{
		std::cout << "I am afraid we missed the target. We need to protect our town" << std::endl;
	}
	system("pause");
	system("cls");

	std::cout << "do these guys not learn they are sending in another troop" << std::endl;

	std::cout << "these are the stats of the troop you are dealing with" << std::endl;
	if (orcChosen)
	{
		healthPoints = troll.health(2);
		damageDone = troll.damage(2);
		std::cout << "The troll's life is: " << healthPoints << std::endl;
		std::cout << "The troll's damage  (only hits air troops) is: " << damageDone << std::endl;
		if (troll.flyingOrNot(2))
		{
			std::cout << "This troop is not flying" << std::endl;
		}
		else
		{
			std::cout << "This troop cannot fly" << std::endl;
		}

	}
	else
	{
		healthPoints = orc.health(2);
		damageDone = orc.health(2);
		std::cout << "The orc's life is: " << healthPoints << std::endl;
		std::cout << "The orc's damage  (only hits air) is: " << damageDone << std::endl;

		if (orc.flyingOrNot(2))
		{
			std::cout << "This troop is not flying" << std::endl;
		}
		else
		{
			std::cout << "This troop cannot fly" << std::endl;
		}
	}

	std::cout << "Its up to you again sir what do we do." << std::endl;
	if (orcChosen)
	{

		game.characterSelection();
		std::cin >> valueIn;

		orc.health(valueIn);
		orc.damage(valueIn);
		orc.warCry(valueIn);
		orc.flyingOrNot(valueIn);
	}
	else
	{
		game.characterSelection();
		std::cin >> valueIn;
		troll.health(valueIn);
		troll.damage(valueIn);
		troll.warCry(valueIn);
		troll.flyingOrNot(valueIn);
	}

	if (valueIn == 1)
	{
		std::cout << "I dont know how we lucked out here but that troop chased into a fence and killed itself. We got away with that one." << std::endl;
	}
	else if (valueIn == 2)
	{
		std::cout << "They both killed each other. We should have a moment's silence for our fallen comerade" << std::endl;
		system("pause");
	}
	else if (valueIn == 5)
	{
		std::cout << "That troop fell from the sky faster than the apple hitting Netwon on the head" << std::endl;
	}
	else
	{
		std::cout << "Now we messed up. That guy could destroy a city on his own" << std::endl;
	}
}