#include "Player.h"
#include "GoalKeeper.h"
#include <iostream>

using namespace std;

Player* GoalKeeper::clone() const { 
    return new GoalKeeper;
}

void GoalKeeper::attributes() const { 
    cout << "GoalKeeper\n"; 
}
