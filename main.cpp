#include <iostream>
#include <set>
#include "setup.h"
#include "queryPlayGame.h"
#include "YNCheck.h"

int main() {
	// A good start to a project
	std::cout << "Welcome to TicTacToe!" << std::endl;

	// start the queryPlay class
	queryPlayGame play;
	bool playGame = play.play(1);

	// Initial check class
	YNCheck ynCheck;


	while (playGame) {
		// Get settings and display
		setup setupClass;
		std::pair <int, int> settingsPair;

		// Ask for default settings
		std::cout << "Default settings? (y/n): ";
		char inputChar;
		std::cin >> inputChar;
		bool defaults = ynCheck.check(inputChar);

		// Get settings
		if (!defaults) {
			settingsPair = setupClass.getSettings();
		}
		else {
			settingsPair = setupClass.getDefaults();
		}

		
		std::cout << "Players: " << settingsPair.first << " - First Player: " << settingsPair.second << std::endl;
		/*
		// Initialize board data structure
		int board[3][3] = { 0 };
		
		// Test display board
		for (int x = 0; x < 3; x++) {
			for (int y = 0; y < 3; y++) {
				std::cout << board[x][y] << std::endl;
			}
		}*/

		// Play again check
		playGame = play.play(0);

	}

	


	return 0;
}