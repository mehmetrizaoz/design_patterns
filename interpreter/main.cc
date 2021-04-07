#include <iostream>
#include "Expression.h"
#include "TerminalExpression.h"
#include "OrExpression.h"
#include "AndExpression.h"

using namespace std;

class GumballMachine;

int main(){
   Expression *person1 = new TerminalExpression("Kushagra");
   Expression *person2 = new TerminalExpression("Lokesh");
   Expression *isSingle = new OrExpression(person1, person2);
      
   Expression *vikram = new TerminalExpression("Vikram");
   Expression *committed = new TerminalExpression("Committed");
   Expression *isCommitted = new AndExpression(vikram, committed);    

   cout << isSingle->interpreter("Kushagra") << endl;
   cout << isSingle->interpreter("Lokesh") << endl;
   cout << isSingle->interpreter("Achint") << endl;
      
   cout << isCommitted->interpreter("Committed, Vikram") << endl;
   cout << isCommitted->interpreter("Single, Vikram") << endl;

   return 0;
}



