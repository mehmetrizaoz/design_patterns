#include "CustomerFactory.h"
#include "AbstractCustomer.h"
#include "RealCustomer.h"
#include "NullCustomer.h"
#include <iostream>
#include <vector>
#include <algorithm>


const vector<string> CustomerFactory::names {"Rob", "Joe", "Julie"};

AbstractCustomer *CustomerFactory::getCustomer(string name){
   
      if (find(names.begin(), names.end(), name) != names.end()){
            return new RealCustomer(name);
      }      
      return new NullCustomer();
}
