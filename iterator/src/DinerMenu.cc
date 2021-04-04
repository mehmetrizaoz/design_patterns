#include "DinerMenu.h"
#include "MenuItem.h"
#include "DinerMenuIterator.h"
#include <string>
#include <string>

using namespace std;

DinerMenu::DinerMenu() {
    addItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);    
    addItem("Non Veg. BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.99);
    addItem("Soup of the day", "Soup of the day, with a side of potato salad", false, 3.29);
    addItem("Sauced Hotdog", "A hot dog, with saurkraut, relish, onions, topped with cheese", false, 3.05);
    addItem("Steamed Rice", "Steamed vegetables over brown rice", true, 3.99);
    addItem("Cherried Pasta", "Spaghetti with Marinara Sauce, and a slice of sourdough bread", true, 3.89);        
}

void DinerMenu::addItem(string name, string description, bool vegetarian, double price){
    MenuItem *m_item = new MenuItem(name, description, vegetarian, price);
    menuItems.push_back(*m_item);
    numberOfItems++;
}

vector<MenuItem> DinerMenu::getMenuItems() {
    return menuItems;
}
Iterator *DinerMenu::createIterator() {
    return new DinerMenuIterator(menuItems);
}

