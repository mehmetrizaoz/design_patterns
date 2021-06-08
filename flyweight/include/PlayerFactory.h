#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include "Player.h"

class PlayerFactory{
public:
    static Player *getPlayer(string type);
    static vector<Player*> hm;
};
