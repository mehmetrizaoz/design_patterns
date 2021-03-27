#include <iostream>
#include "playerManager.h"
#include "Player.h"

using namespace std;

int main() {
   int choice;
   cout << "GoalKeeper(0), Defender(1), Midfielder(2), Attacker(3)" << endl;

   cin >> choice;
   if(choice < playerManager::N){
      Player *player = playerManager::makePlayer( choice );
      player->attributes();
   }

   return 0;
}
