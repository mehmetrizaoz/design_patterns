#include <iostream>
#include "State.h"
#include "SoldState.h"
#include "GumballMachine.h"

using namespace std;

class GumballMachine;

int main(){
		GumballMachine *gumballMachine = new GumballMachine(5);
      //		System.out.println(gumballMachine);

		gumballMachine->insertQuarter();
		gumballMachine->turnCrank();

		gumballMachine->insertQuarter();
		gumballMachine->turnCrank();

		//System.out.println(gumballMachine);

		gumballMachine->insertQuarter();
		gumballMachine->turnCrank();
		
		gumballMachine->insertQuarter();
		gumballMachine->turnCrank();

//		System.out.println(gumballMachine);

   return 0;
}



