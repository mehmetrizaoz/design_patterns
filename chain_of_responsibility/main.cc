#include <iostream>
#include "AbstractEmployee.h"
#include "Employer.h"
#include "Manager.h"
#include "Director.h"

using namespace std;

int AbstractEmployee::LOW = 10000;
int AbstractEmployee::MIDDLE = 20000;
int AbstractEmployee::HIGH = 50000;

int main(){ 
   AbstractEmployee *director = 0;
   Director d(AbstractEmployee::HIGH);
   director = &d;

   AbstractEmployee *manager = 0;
   Manager m(AbstractEmployee::MIDDLE);
   manager = &m;

   AbstractEmployee *employer = 0;
   Employer e(AbstractEmployee::LOW);
   employer = &e;   

   employer->setNextLevel(manager);
   manager->setNextLevel(director);

   employer->handleJob(9000);
   employer->handleJob(19000);
   employer->handleJob(55000);   

   return 0;
}



