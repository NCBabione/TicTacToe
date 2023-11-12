#include "YNCheck.h"

bool YNCheck::check(char x) {
	// Check if Y or N
	if (x == 'y' || x == 'Y') {
		return true;
	}
	else if (x == 'n' || x == 'N') {
		return false;
	}

	// If user inputs something other than y, Y, n, or N, retry
	std::cout << "Invalid input! Reenter (y/n): ";
	char input;
	std::cin >> input;

	// If invalid, get new input and return it recursively
	return check(input);
}