#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;

class Player{
public:
   void assignWeapon(string weapon);
   void mission();
   string type;
private:
   virtual void performAssignWeapon(string weapon)=0;
   virtual void performMission()=0;   
};

#endif