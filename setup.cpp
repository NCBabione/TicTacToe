#include "setup.h"
#include <iostream>
#include <set>
#include "YNCheck.h"
#include "intInRange.h"
#include <ctype.h>
#include <string>

std::pair<int, int> setup::getSettings() {
	// Initialize YNCheck class
	YNCheck yncheck;

	// Initialize intInRange class
	intInRange intRange;

	// Set defaults
	int players;
	int firstPlayer;
	
	// Initialize return pair
	std::pair<int, int> returnPair;

	// Get settings from user
	char temp;
	int tempInt;
	
	bool validPlayers = false;
	while (!validPlayers) {
		// Set the number of players
		std::cout << "Players? (1 or 2): ";
		std::cin >> temp;
		if (isdigit(temp)) {
			tempInt = int(temp) - 48;
			if (intRange.checkRange(1, 2, tempInt)) {
				players = tempInt;
				validPlayers = true;
			}
		}
		else {
			std::cout << "Sorry, not a digit, reenter" << std::endl;
		}
	}
	
	bool validFirst = false;
	while (!validFirst) {
		// Set the first player
		std::cout << "Who's first? (1 or 2): ";
		std::cin >> temp;
		if (isdigit(temp)) {
			tempInt = int(temp) - 48;
			if (intRange.checkRange(1, 2, tempInt)) {
				firstPlayer = tempInt;
				validFirst = true;
			}
		}
		else {
			std::cout << "Sorry, not a digit, reenter" << std::endl;
		}
	}

	// Set pair values
	returnPair.first = players;
	returnPair.second = firstPlayer;




	// Ask user for more settings
	std::cout << "More settings? (y/n): ";
	char inputChar;
	std::cin >> inputChar;
	
	// Check if data is valid and true or false
	bool moreSettings = true;
	moreSettings = yncheck.check(inputChar);

	// Give more settings
	if (moreSettings) {
		std::cout << "Enable keypad for input? (y/n): ";
		std::cin >> inputChar;
		useKeypad = yncheck.check(inputChar);
	}

	// Return the pair
	return returnPair;
}

std::pair<int, int> setup::getDefaults() {
	std::pair<int, int> myPair;
	myPair.first = 1;
	myPair.second = 1;
	return myPair;
}