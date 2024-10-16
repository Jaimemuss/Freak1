#include <iostream>

#include <iomanip>

#include <windows.h>

#include <chrono>

#include <thread>

#include <cmath>

#include <SFML/Graphics.hpp>


float highBaccarat(float &money) {

		

}

 float lowBaccarat(float &money) {



}

float lowRoulette() {



}

float highRoulette(float &money) {

	sf::RenderWindow(sf::VideoMode(800, 600), "Roulette table");

	
	
	
	}










	

int main() {

	std::cout << " Welcome to the Casino \n";

	std::this_thread::sleep_for(std::chrono::seconds(2));


	std::cout << "We will be with you shortly \n";
	
	std::this_thread::sleep_for(std::chrono::seconds(3));

	float moneyBrought;

	char low_BudgetPlay;
	
	char high_BudgetPlay;

	float moneyBet;

	std::string playerName;

	bool low_BudgetPlayStatus = 0;

	bool high_BudgetPlayStatus = 0;

	std::cout << "What is your name ? ";

	std::cin >> playerName;

	std::cout << "Nice to meet you " << playerName;


	std::cout << " How much money did you bring ? \n";

	std::cin >> moneyBrought;

	float moneyHave = moneyBrought;

	
	std::cout << " Nice this is your first time at the casino, you have $" << moneyHave << "\n";

	
	
	
	if (moneyHave < 10000)
	{
		std::cout << " You are not eligible for the High Roller Games\n\n";
		


		std::cout << "Is this okay ? Y or y for yes and any other key to exit";


		std::cin >> low_BudgetPlay;


		if (low_BudgetPlay == 'Y' || low_BudgetPlay == 'y') {
				
			low_BudgetPlayStatus = 1;
	
		}

		else {

			std::cout << "You are now exiting the casino with " << moneyHave << " \n\n Have a good night " << playerName;

			exit(0);

		}

	}
	else if(moneyHave > 10000){
		
		std::cout << "You are eligible for the high roller games\n\n";

		std::cout << "Is this okay ? Y or y for yes and any other key to exit";

		std::cin >> high_BudgetPlay;

		if (high_BudgetPlay == 'Y' || high_BudgetPlay == 'y')
		{
		
			high_BudgetPlayStatus = 1;

		}
		else {

			std::cout << "You are now exiting the casino with " << moneyHave << " \n\n Have a good night " << playerName;

			exit(0);

		}

		
	}
	

	 
	//game 1 roulette
	//game 2 baccarat
	//game 3 Horse Racing 
	//game 4 Dice




	return 0;
}


