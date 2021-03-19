#include <iostream>
#include "Attacker.h"
#include "Defender.h"
#include "FootballPlayer.h"

using namespace std;

int main(){
   FootballPlayer fP;
   fP.sprint();
   fP.describe();   
   fP.performShoot();  
   
   fP.setPlayerStrategy(new Attacker());
   fP.performShoot();
   
   fP.setPlayerStrategy(new Defender());
   fP.performShoot();   
   return 0;
}



