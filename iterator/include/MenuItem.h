#ifndef MENU_ITEM_H
#define MENU_ITEM_H

#include <string>

using namespace std;

class MenuItem {
public:    
	string name;
	string description;
	bool vegetarian;
	double price;
 
	MenuItem(string name, string description, bool vegetarian, double price);  
	string getName();
	string getDescription();  
	double getPrice();  
	bool isVegetarian();
	string toString();
};

#endif