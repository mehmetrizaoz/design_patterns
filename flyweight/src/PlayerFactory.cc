#include "PlayerFactory.h"
#include "Terrorist.h"
#include "Player.h"
#include "CounterTerrorist.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<Player*> PlayerFactory::hm;

PlayerFactory::PlayerFactory(){
   /*PlayerFactory::hm.push_back(new Terrorist());
   PlayerFactory::hm.push_back(new CounterTerrorist());

   for(auto it = PlayerFactory::hm.begin(); it < PlayerFactory::hm.end(); ++it){
      cout << (*it)->type << endl;
   }   */
}

Player *PlayerFactory::getPlayer(string type){
   if(type == "Terrorist"){
       PlayerFactory::hm.push_back(new Terrorist());
   }
   else if(type == "Counter"){
       PlayerFactory::hm.push_back(new CounterTerrorist());
   }
   
   for(auto it = PlayerFactory::hm.begin(); it < PlayerFactory::hm.end(); ++it){
      //cout << (*it)->type << endl;
      if((*it)->type == type){
          return PlayerFactory::hm[it - PlayerFactory::hm.begin()];
      }    
   }

   return nullptr;   
}

