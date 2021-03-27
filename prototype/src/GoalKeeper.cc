#include "Player.h"
#include "GoalKeeper.h"
#include <iostream>

using namespace std;

Player* GoalKeeper::performClone() const { 
    return new GoalKeeper;
}

void GoalKeeper::performAttributes() const { 
    cout << "GoalKeeper\n"; 
}
