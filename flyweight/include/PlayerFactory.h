#ifndef PLAYER_FACTORY_H
#define PLAYER_FACTORY_H

#include <string>
#include <vector>
#include <unordered_map>
#include "Player.h"

class PlayerFactory{
public:
    static Player *getPlayer(string type);
    static vector<Player*> hm;
};

#endif