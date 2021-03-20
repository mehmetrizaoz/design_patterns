#include <iostream>
#include "State.h"
#include "SoldState.h"
#include "GumballMachine.h"

using namespace std;

class GumballMachine;

int main(){
	GumballMachine *gumballMachine = new GumballMachine(5);
    gumballMachine->print();

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	gumballMachine->print();

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
		
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

    gumballMachine->print();

    return 0;
}



