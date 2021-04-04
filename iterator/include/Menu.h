#ifndef MENU_H
#define MENU_H

#include "Iterator.h"

class Menu {
public:
   Menu();   
   virtual Iterator *createIterator()=0;
};

#endif