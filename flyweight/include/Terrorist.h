#ifndef TERRORIST_H
#define TERRORIST_H

#include <string>
#include "Player.h"

class Terrorist : public Player{
private:
    const string TASK = "PLANT A BOMB";    
    string weapon;
public:
    Terrorist();
    void performAssignWeapon(string weapon);
    void performMission();
};

#endif