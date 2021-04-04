#include <iostream>
#include <vector>
#include <string>
#include "DinerMenu.h"
#include "Waitress.h"

using namespace std;

int main() {      

   //PancakeHouseMenu pancakeHouseMenu = new PancakeHouseMenu();
   DinerMenu *dinerMenu = new DinerMenu();
   Waitress *waitress = new Waitress(/*pancakeHouseMenu,*/ *dinerMenu);

   vector<MenuItem> lunchItems = dinerMenu->getMenuItems();

   for (int i = 0; i < lunchItems.size(); i++) {
      MenuItem menuItem = lunchItems.at(i);
      cout << menuItem.getName() ;
      cout << "\t\t" << menuItem.getPrice();
      cout << "\t" << menuItem.getDescription() << endl;
   }

   return 0;
}
