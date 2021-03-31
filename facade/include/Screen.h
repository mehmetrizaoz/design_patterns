#ifndef SCREEN_H
#define SCREEN_H

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

#endif