#include "Expression.h"
#include "OrExpression.h"

OrExpression::OrExpression(Expression *expr1, Expression *expr2){
    this->expr1 = expr1;
    this->expr2 = expr2;
}

bool OrExpression::interpreter(string con){        
    return expr1->interpreter(con) || expr2->interpreter(con);
}
