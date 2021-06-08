#pragma once

#include "Expression.h"
#include <string>

class OrExpression : public Expression{
public:
    Expression *expr1;
    Expression *expr2;  
    OrExpression(Expression *expr1, Expression *expr2);
    bool interpreter(string con);
};

