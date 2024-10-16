#include <iostream>

#include <iomanip>

#include <windows.h>

#include <chrono>

#include <thread>

#include <cmath>



 std::string player() {

	std::string playerName;
	
	std::cout << "What is your name ? ";

	std::cin >> playerName;

	std::cout << "Nice to meet you " << playerName << std::endl;

	return playerName;

}


 static void welcome() {
 
	 std::cout << " Welcome to the Casino \n";

	 std::this_thread::sleep_for(std::chrono::seconds(2));


	 std::cout << "We will be with you shortly \n";

	 std::this_thread::sleep_for(std::chrono::seconds(3));
 
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

		 std::cout << "Great you will be eligible to play at the high roller tables. \n";
	 
	 }
	 else {
		  amI_Rich = false;
		 std::cout << "You are only eligible for standard play. Enjoy! \n";
	 }

	 return amI_Rich;

	}

 
	
	
	
int main() 
 {
	 
	//calls to see how much money player has now reference this into the status to find out if hes a high roller
	 float moneyHave = currentPlayerMoney();

	 //gets the money player has and puts it into the function to 
	 bool isHighRoller = playerMoneyStatus(moneyHave);



	 return 0;
 
 }





