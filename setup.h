#pragma once
#include <set>

class setup {
private:
	bool useKeypad;

public:
	std::pair<int, int> getSettings();
	std::pair<int, int> getDefaults();
};