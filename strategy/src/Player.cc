#include "Player.h"
#include <iostream>

using namespace std;

void Player::performShoot(){
   pS->shoot(); 
}   

void Player::setPlayerStrategy(PlayerStrategy *fB){     
   delete pS;    
   pS = fB;
}   
void Player::sprint (){
   cout << "i'm running" << endl; 
}   

Player::~Player(){ 
   delete pS; 
};

