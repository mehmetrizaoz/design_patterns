#ifndef TERMINAL_EXPRESSION_H
#define TERMINAL_EXPRESSION_H

#include <string>
#include "Expression.h"

class TerminalExpression : public Expression{
public: 
   string data;
   TerminalExpression(string data);  
   bool interpreter(string con);
};

#endif
