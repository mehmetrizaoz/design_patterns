#include "Player.h"
#include <iostream>

using namespace std;

void Player::assignWeapon(string weapon){
   cout << "assignWeapon" << endl;
   performAssignWeapon(weapon);
}

void Player::mission(){
   cout << "mission" << endl;
   performMission();
}
