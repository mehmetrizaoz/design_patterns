//https://www.geeksforgeeks.org/flyweight-design-pattern/

#include <iostream>
#include "Player.h"
#include "PlayerFactory.h"

using namespace std;

int main() {      
   Player *p = PlayerFactory::getPlayer("Counter");   
   p->assignWeapon("Pistole");
   p->mission();
   
   cout << PlayerFactory::hm.size() << endl << endl;

   Player *p2 = PlayerFactory::getPlayer("Terrorist");   
   p2->assignWeapon("Sniper");
   p2->mission();
   cout << PlayerFactory::hm.size() << endl << endl;

   Player *p3 = PlayerFactory::getPlayer("Terrorist");   
   p3->assignWeapon("Rifle");
   p3->mission(); 
   cout << PlayerFactory::hm.size() << endl << endl;

   return 0;
}
