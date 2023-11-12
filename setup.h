#pragma once
#include <set>

class setup {
private:
	bool useKeypad;

public:
	// Getter functions
	std::pair<int, int> getDefaults();
	bool getKeyPadOption();

	// Getter and Setter function
	std::pair<int, int> getSettings();
};