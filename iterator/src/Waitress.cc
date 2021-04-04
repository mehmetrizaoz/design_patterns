#include "DinerMenu.h"
#include "Iterator.h"
#include "MenuItem.h"
#include "Waitress.h"
#include <string>
#include <iostream>

using namespace std;

Waitress::Waitress(/*PancakeHouseMenu pancakeHouseMenu, */DinerMenu dinerMenu) {
    //this.pancakeHouseMenu = pancakeHouseMenu;
    this->dinerMenu = dinerMenu;
}

void Waitress::printMenu() {
    //Iterator pancakeIterator = pancakeHouseMenu.createIterator();
    auto dinerIterator = dinerMenu.createIterator();

    //System.out.println("MENU\n----\nBREAKFAST");
    //printMenu(pancakeIterator);
    
    //System.out.println("\nLUNCH");
    printMenu(dinerIterator);
}

void Waitress::printMenu(Iterator *iterator) {
    while (iterator->hasNext()) {
        MenuItem *menuItem = (MenuItem *)iterator->next();
        cout << menuItem->getName() << ", ";
        cout << menuItem->getPrice() << " -- ";
        cout << menuItem->getDescription() << endl;
    }
}

void Waitress::printVegetarianMenu() {
    //printVegetarianMenu(pancakeHouseMenu.createIterator());
    printVegetarianMenu(dinerMenu.createIterator());
}

bool Waitress::isItemVegetarian(string name) {
    /*Iterator breakfastIterator = pancakeHouseMenu.createIterator();
    if (isVegetarian(name, breakfastIterator)) {
        return true;
    }*/
    Iterator *dinnerIterator = dinerMenu.createIterator();
    if (isVegetarian(name, dinnerIterator)) {
        return true;
    }
    return false;
}


void Waitress::printVegetarianMenu(Iterator *iterator) {
    while (iterator->hasNext()) {
        MenuItem *menuItem = (MenuItem *)iterator->next();
        if (menuItem->isVegetarian()) {
            cout << menuItem->getName();
            cout << "\t\t" << menuItem->getPrice();
            cout << "\t" << menuItem->getDescription() << endl;
        }
    }
}

bool Waitress::isVegetarian(string name, Iterator *iterator) {
    while (iterator->hasNext()) {
        MenuItem *menuItem = (MenuItem *)iterator->next();
        if (menuItem->getName() == name) {
            if (menuItem->isVegetarian()) {
                return true;
            }
        }
    }
    return false;
}

