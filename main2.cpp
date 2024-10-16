#include <iostream>

#include <iomanip>

#include <windows.h>

#include <chrono>

#include <thread>

#include <cmath>

#include <SFML/Graphics.hpp>

 std::string player() {

	static std::string playerName;
	
	std::cout << "What is your name ? ";

	std::cin >> playerName;

	std::cout << "Nice to meet you " << playerName << std::endl;

	return playerName;

}


 void welcome() {
 
	 std::cout << " Welcome to the Casino \n";

	 std::this_thread::sleep_for(std::chrono::seconds(2));


	 std::cout << "We will be with you shortly \n";

	 std::this_thread::sleep_for(std::chrono::seconds(3));
 
 }

 float currentPlayerMoney() {

	 float money;

	 std::cout << "How much money did you bring ? ";




		

 }

 int  playerMoneyStatus(float &playerMoney) {

	 
 
	

 }





