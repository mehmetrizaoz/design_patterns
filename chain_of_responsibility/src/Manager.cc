#include <iostream>
#include "Manager.h"

using namespace std;

Manager::Manager(int l){
   level = l;
}

void Manager::write(int amount) {		
   cout << "I'm a Manager i can handle jobs up to 20.000$, amount to handle is " << amount << endl;
}


