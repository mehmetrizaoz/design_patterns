#pragma once

#include <string>

using namespace std;

class Screen {
public:
	string description;
	Screen(string description);
 	void up(); 
	void down();
    string toString();
};
