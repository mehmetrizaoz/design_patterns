#ifndef COUNTER_TERRORIST_H
#define COUNTER_TERRORIST_H

#include <string>
#include "Player.h"

class CounterTerrorist : public Player{
private:
   const string TASK = "DIFFUSE BOMB";    
   string weapon;   
public:
   CounterTerrorist();
   void assignWeapon(string weapon);
   void mission();
};

#endif