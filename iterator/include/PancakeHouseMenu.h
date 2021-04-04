#ifndef PANCAKE_HOUSE_MENU_H
#define PANCAKE_HOUSE_MENU_H

#include "MenuItem.h"
#include "Menu.h"
#include <vector>
#include <string>

using namespace std;

class PancakeHouseMenu : public Menu {
public:
   vector<MenuItem> menuItems;
   PancakeHouseMenu();
   void addItem(string name, string description, bool vegetarian, double price);
   //vector<MenuItem> getMenuItems();
   Iterator *createIterator();
   string toString();
};

#endif