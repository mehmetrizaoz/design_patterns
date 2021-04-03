#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;

class Player{
public:
   string type;
   Player();
//   void assignWeapon(string weapon);
//   void mission();
   
//private:
   virtual void assignWeapon(string weapon)=0;
   virtual void mission()=0;   
};

#endif