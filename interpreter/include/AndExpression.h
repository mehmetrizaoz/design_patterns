#ifndef AND_EXPRESSION_H
#define AND_EXPRESSION_H

#include "Expression.h"
#include <string>

class AndExpression : public Expression{
public:
    Expression *expr1;
    Expression *expr2;  
    AndExpression(Expression *expr1, Expression *expr2);
    bool interpreter(string con);
};

#endif