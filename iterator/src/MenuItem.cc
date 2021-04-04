#include "MenuItem.h"
#include <string>

using namespace std;

MenuItem::MenuItem(string name, 
                string description, 
                bool vegetarian, 
                double price) 
{
    this->name = name;
    this->description = description;
    this->vegetarian = vegetarian;
    this->price = price;
}

string MenuItem::getName() {
    return name;
}

string MenuItem::getDescription() {
    return description;
}

double MenuItem::getPrice() {
    return price;
}

bool MenuItem::isVegetarian() {
    return vegetarian;
}
string MenuItem::toString() {
    string s = name + ", $" + to_string(price) + "\n   " + description;
    return s;
}
