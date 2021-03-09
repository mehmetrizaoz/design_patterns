#include <iostream>

using namespace std;

class PlayerStrategy{ //interface 
public:
   void shoot(){ performShoot(); }
private:
   virtual void performShoot() = 0;
};

//encapsulated behaviors
class Attacker : public PlayerStrategy{
public:
   void performShoot(){ cout << "shoot on target" << endl; }
};

class Defender : public PlayerStrategy{
public:
   void performShoot(){ cout << "missed the goal" << endl; }
};

class Player{
public:
   PlayerStrategy *pS = nullptr; //interface    
   void performShoot(){ pS->shoot(); }   
   void setPlayerStrategy(PlayerStrategy *fB){     
      delete pS;    
      pS = fB;
   }   
   //other functions
   void sprint (){ cout << "i'm running" << endl; }   
   virtual void describe() = 0; //makes class abstract
   ~Player(){ delete pS; };
};

class FootballPlayer : public Player{
public:   
   FootballPlayer(){ setPlayerStrategy(new Defender()); }   
   void describe(){ cout << "i'am a defender" << endl; }
};

int main(){
   FootballPlayer fP;
   fP.sprint();
   fP.describe();   
   fP.performShoot();  //perform with default
   
   fP.setPlayerStrategy(new Attacker());
   fP.performShoot();
   
   fP.setPlayerStrategy(new Defender());
   fP.performShoot();   
   return 0;
}



