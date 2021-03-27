#ifndef PLAYER_MANAGER_H
#define PLAYER_MANAGER_H

#include "Player.h"



class playerManager {
public:
   static const int N = 4;
   static Player* makePlayer( int choice );
private:
   static Player* playerType[N];
};


#endif