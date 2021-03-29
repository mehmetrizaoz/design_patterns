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
   void performAssignWeapon(string weapon);
   void performMission();
};

#endif