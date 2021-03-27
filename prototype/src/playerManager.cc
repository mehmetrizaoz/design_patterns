
#include "playerManager.h"
#include "Player.h"
#include "GoalKeeper.h"
#include "Midfielder.h"
#include "Defender.h"
#include "Attacker.h"

Player* playerManager::playerType[] = { new GoalKeeper, new Defender, new Midfielder, new Attacker };

Player* playerManager::makePlayer( int choice ){
   return playerType[choice]->clone();
}

