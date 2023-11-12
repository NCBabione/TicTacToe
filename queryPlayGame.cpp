#include "queryPlayGame.h"
#include <iostream>
#include "YNCheck.h"

bool queryPlayGame::play(bool firstTime) {
	// Ask player if they would like to play
	firstTime ? std::cout << "Would you like to play a game? (y/n): " : std::cout << "Would you like to play again? (y/n): ";

	// Get input from player
	char inputChar;
	std::cin >> inputChar;

	// Check if input is a yes or no
	YNCheck checkClass;
	playGame = checkClass.check(inputChar);
	
	// Return bool
	return playGame;
}
