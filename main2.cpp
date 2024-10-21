#include <iostream>
#include <iomanip>
#include <windows.h>
#include <chrono>
#include <thread>
#include <cmath>
#include <string>
#include <cstdlib> 
#include <ctime>   

std::string player() {
    std::string playerName;
    Sleep(1000);
    std::cout << "What is your name? ";
    std::getline(std::cin, playerName);
    Sleep(1000);
    std::cout << "Nice to meet you, " << playerName << std::endl;
    return playerName;
}

void welcome() {
    std::cout << "Welcome to the Casino\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "We will be with you shortly\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
}

float currentPlayerMoney() {
    float money;
    std::cout << "How much money did you bring? ";
    std::cin >> money;
    return money;
}

bool playerMoneyStatus(float& playerMoney) {
    if (playerMoney > 10000) {
        Sleep(1000);
        std::cout << "Great, you are eligible to play at the high roller tables.\n";
        return true;
    }
    else {
        Sleep(1000);
        std::cout << "You are only eligible for standard play. Enjoy!\n";
        return false;
    }
}

void highRollerMenu() {
    std::cout << "\n-- Welcome to the High Roller Menu --\n";
    std::cout << "1. Check Balance\n";
    std::cout << "2. Games Menu\n";
    std::cout << "3. Exit the Casino\n";
}

float roulette(float& playerMoney) {
    int chosenNumber, rouletteNumber;
    float betAmount;

    std::cout << "Welcome to Roulette!\n";

    // Get a valid number between 0 and 36
    do {
        std::cout << "Choose a number between 0 and 36: ";
        std::cin >> chosenNumber;
        if (chosenNumber < 0 || chosenNumber > 36) {
            std::cout << "Invalid number. Please choose a number between 0 and 36.\n";
        }
    } while (chosenNumber < 0 || chosenNumber > 36);

    // Get a valid bet amount
    do {
        std::cout << "How much would you like to bet? ";
        std::cin >> betAmount;
        if (betAmount <= 0) {
            std::cout << "Bet amount must be greater than 0.\n";
        }
        else if (betAmount > playerMoney) {
            std::cout << "You don't have enough money to make that bet!\n";
        }
    } while (betAmount <= 0 || betAmount > playerMoney);

    // Deduct the bet amount from player's balance
    playerMoney -= betAmount;

    // Simulate spinning the roulette wheel
    rouletteNumber = rand() % 37; // Random number between 0 and 36
    std::cout << "The roulette wheel spins...\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "The ball lands on: " << rouletteNumber << "\n";

    // Check if player wins
    if (rouletteNumber == chosenNumber) {
        std::cout << "Congratulations! You won!\n";
        playerMoney += betAmount * 35; // Payout for betting on a number is 35 to 1
    }
    else {
        std::cout << "Sorry, you lost your bet.\n";
    }

    std::cout << "You now have $" << playerMoney << "\n";
    return playerMoney;
}

void game_menu(float& playerMoney) {
    int gameChoice;
    std::cout << "Please choose a game: \n";
    std::cout << "1. Roulette\n";
    std::cout << "2. Blackjack\n";
    std::cout << "3. Poker\n";
    std::cout << "4. Go back to High Roller Menu\n";
    std::cin >> gameChoice;

    switch (gameChoice) {
    case 1:
        playerMoney = roulette(playerMoney); // Call the roulette game
        break;
    case 2:
        std::cout << "You chose Blackjack.\n";
        break;
    case 3:
        std::cout << "You chose Poker.\n";
        break;
    case 4:
        std::cout << "Going back to High Roller Menu...\n";
        break;
    default:
        std::cout << "That’s not an option, please try again.\n";
        break;
    }
}

int main() {
    srand(time(0)); // Seed the random number generator
    welcome();
    Sleep(2000);

    std::string playerName = player();
    float moneyHave = currentPlayerMoney();
    bool isHighRoller = playerMoneyStatus(moneyHave);

    while (isHighRoller) {
        system("cls");

        bool running = true;
        int userChoice;

        while (running) {
            highRollerMenu();
            std::cin >> userChoice;  // Get user input before switch

            switch (userChoice) {
            case 1:
                std::cout << "You have $" << moneyHave << " dollars\n";
                break;
            case 2:
                game_menu(moneyHave); // Pass money to game_menu
                break;
            case 3:
                std::cout << "You are exiting the casino...\n";
                Sleep(2000);
                exit(0); // Exit the program
                break;
            default:
                std::cout << "Sorry, please select one of the options above\n";
                system("cls");
                break;
            }

            // Condition to stop running the high roller loop
            if (moneyHave < 10000) {
                std::cout << "You no longer have enough money to play at the high roller tables.\n";
                running = false;
            }
        }
    }
    return 0;
}
