#pragma once

#include <string>

using namespace std;

class Player{
public:
   string type;
   Player();
   virtual void assignWeapon(string weapon)=0;
   virtual void mission()=0;   
};
