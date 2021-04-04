#include <iostream>
#include <vector>
#include "PancakeHouseMenu.h"
#include <string>
#include "DinerMenu.h"
#include "Waitress.h"

using namespace std;

int main() {      

   PancakeHouseMenu *pancakeHouseMenu = new PancakeHouseMenu();
   DinerMenu *dinerMenu = new DinerMenu();
   Waitress *waitress = new Waitress(*pancakeHouseMenu, *dinerMenu);

   waitress->printMenu();
   cout << "..........." << endl;
   waitress->printVegetarianMenu();

   

   return 0;
}
