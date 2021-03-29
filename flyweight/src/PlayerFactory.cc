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
      //cout << (*it)->type << endl;
      if((*it)->type == type){
          return PlayerFactory::hm[it - PlayerFactory::hm.begin()];
      }    
   }

   if(type == "Terrorist"){
       PlayerFactory::hm.push_back(new Terrorist());
       cout << "111" << endl;
   }
   else if(type == "Counter"){
       PlayerFactory::hm.push_back(new CounterTerrorist());
       cout << "222" << endl;
   }

   return PlayerFactory::hm.back();  
}

