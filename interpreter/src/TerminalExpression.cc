#include "TerminalExpression.h"
#include <string>

using namespace std;

TerminalExpression::TerminalExpression(string data){
   this->data = data; 
}

bool TerminalExpression::interpreter(string con){
   if(con.find(data) != string::npos){
      return true;
   }
   else{
      return false;  
   }
}

