#include <iostream>

using namespace std;

const int N = 4;

class Player {
public:
   virtual Player* clone() const = 0;
   virtual void attributes() const = 0;
};

class GoalKeeper : public Player {
public:
   Player* clone() const { return new GoalKeeper; }
   void attributes() const { cout << "GoalKeeper\n"; }
};

class Defender : public Player {
public:
   Player* clone() const { return new Defender; }
   void attributes() const { cout << "Defender\n"; }
};

class Midfielder : public Player{
public:
   Player* clone() const { return new Midfielder; }
   void attributes() const { cout << "Midfielder\n"; }
};

class Attacker : public Player{
public:
   Player* clone() const { return new Attacker; }
   void attributes() const { cout << "Attacker\n"; }
};

class playerManager {
public:
   static Player* makePlayer( int choice ){
      return playerType[choice]->clone();
   }
private:
   static Player* playerType[N];
};

Player* playerManager::playerType[] = { new GoalKeeper, new Defender, new Midfielder, new Attacker };

int main() {
   int choice;
   cout << "GoalKeeper(0), Defender(1), Midfielder(2), Attacker(3)" << endl;

   cin >> choice;
   if(choice < N){
      Player *player = playerManager::makePlayer( choice );
      player->attributes();
   }

   return 0;
}
