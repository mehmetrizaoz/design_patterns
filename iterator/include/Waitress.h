#ifndef WAITRESS_H
#define WAITRESS_H

#include "DinerMenu.h"
#include "Iterator.h"
#include <string>

using namespace std;

class Waitress {
public:
   //PancakeHouseMenu pancakeHouseMenu;
   DinerMenu dinerMenu;

   Waitress(/*PancakeHouseMenu pancakeHouseMenu, */DinerMenu dinerMenu);
   void printMenu();   
   void printVegetarianMenu();
   bool isItemVegetarian(string name);
private:
   void printMenu(Iterator *iterator);   
   void printVegetarianMenu(Iterator *iterator);
   bool isVegetarian(string name, Iterator *iterator);
};

#endif
