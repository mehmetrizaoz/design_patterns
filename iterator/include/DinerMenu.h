#ifndef DINER_MENU_H
#define DINER_MENU_H

#include "Iterator.h"
#include "Menu.h"
#include "MenuItem.h"
#include <vector>
#include <string>

using namespace std;

class DinerMenu : public Menu {
public:    
   vector<MenuItem> menuItems;
   DinerMenu();
   void addItem(string name, string description, bool vegetarian, double price);
   Iterator *createIterator();
};

#endif