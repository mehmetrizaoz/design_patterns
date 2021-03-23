#include <iostream>
#include "AbstractEmployee.h"
#include "Employer.h"
#include "Manager.h"
#include "Director.h"

using namespace std;

int LOW = 10000;
int MIDDLE = 20000;
int HIGH = 50000;



int main(){ 
   Director d(HIGH);
   AbstractEmployee *director = &d;

   Manager m(MIDDLE);
   AbstractEmployee *manager = &m;

   Employer e(LOW);
   AbstractEmployee *employer = &e;   

   employer->setNextLevel(manager);
   manager->setNextLevel(director);

   employer->handleJob(9000);
   employer->handleJob(19000);
   employer->handleJob(55000);   

   return 0;
}



