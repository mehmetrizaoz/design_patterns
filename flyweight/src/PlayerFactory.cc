#include "PlayerFactory.h"
#include "Terrorist.h"
#include "Player.h"
#include "CounterTerrorist.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<Player*> PlayerFactory::hm;

Player *PlayerFactory::getPlayer(string type){
   for(auto it = PlayerFactory::hm.begin(); it < PlayerFactory::hm.end(); ++it){
      if((*it)->type == type){
          return PlayerFactory::hm[it - PlayerFactory::hm.begin()];
      }    
   }
   //if not added before add it
   if(type == "Terrorist"){
       PlayerFactory::hm.push_back(new Terrorist());       
   }
   else if(type == "Counter"){
       PlayerFactory::hm.push_back(new CounterTerrorist());       
   }

   return PlayerFactory::hm.back();  
}

