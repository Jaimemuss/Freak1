#include <iostream>

#include <iomanip>

#include <windows.h>

#include <chrono>

#include <thread>

#include <cmath>

#include <string>



 std::string player() {

	std::string playerName;

	Sleep(1000);
	
	std::cout << "What is your name ? ";

	std::cin >> playerName;

	Sleep(1000);

	std::cout << "Nice to meet you " << playerName << std::endl;

	return playerName;

}


 void welcome() {
 
	 std::cout << " Welcome to the Casino \n";

	 std::this_thread::sleep_for(std::chrono::seconds(2));


	 std::cout << "We will be with you shortly \n";

	 std::this_thread::sleep_for(std::chrono::seconds(3));

	 return;
 
 }

 float currentPlayerMoney() {

	 float money;

	 std::cout << "How much money did you bring ? ";

	 std::cin >> money;	
		
	 return money;

 }

	bool  playerMoneyStatus(float &playerMoney) {

		bool amI_Rich = false;

	 if (playerMoney > 10000) {
	 
		 amI_Rich = true;

		 Sleep(1000);

		 std::cout << "Great you will be eligible to play at the high roller tables. \n";
	 
	 }
	 else {
		  amI_Rich = false;
		  Sleep(1000);
		 std::cout << "You are only eligible for standard play. Enjoy! \n";
	 }

	 return amI_Rich;

	}

	void highRollerMenu() {
		
		 

			std::cout << " \n --Welcome to the high roller menu-- \n";

			std::cout << "			 Check Balance \n";
			
			std::cout << "			   Games Menu \n";

			std::cout << "		  Enter Standard Play \n";

			std::cout << "			EXIT THE CASINO \n";



		
	
	}

	
	
	
	
int main() 
 {
	//welcome function self explanatory
	 welcome();
	
	 Sleep(2000);

	//function that gets the players name its static and cannot be called outside of this file might change
	std::string playerName = player();
	 
	//calls to see how much money player has now reference this into the status to find out if hes a high roller
	 float moneyHave = currentPlayerMoney();

	 //gets the money player has and puts it into the function to 
	 bool isHighRoller = playerMoneyStatus(moneyHave);

		
	 while (isHighRoller == true) {

		 bool running = true;

		 while (running) {
			 //code to clear the console display
			 std::cout << "\033[2J\033[1;1H";
				
		 }
	 
		
	 
	 }





	 return 0; 
 }





