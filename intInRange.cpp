#include "intInRange.h"
#include <iostream>

bool intInRange::checkRange(int low, int high, int toCheck) {
	if (toCheck >= low && toCheck <= high) {
		return true;
	}

	std::cout << "Given input is out of range! Input must be between " << low << " and " << high << std::endl;
	std::cout << "Reenter input" << std::endl;
	return false;
}