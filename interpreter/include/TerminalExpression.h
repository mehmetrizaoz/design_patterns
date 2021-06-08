#pragma once

#include <string>
#include "Expression.h"

class TerminalExpression : public Expression{
public: 
   string data;
   TerminalExpression(string data);  
   bool interpreter(string con);
};


