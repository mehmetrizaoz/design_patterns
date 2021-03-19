#include "FootballPlayer.h"
#include <iostream>
#include "Defender.h"

using namespace std;

FootballPlayer::FootballPlayer(){
   setPlayerStrategy(new Defender()); 
}   

void FootballPlayer::describe(){ 
   cout << "i'am a defender" << endl; 
}
