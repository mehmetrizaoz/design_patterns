#include "Expression.h"
#include "AndExpression.h"

AndExpression::AndExpression(Expression *expr1, Expression *expr2){
    this->expr1 = expr1;
    this->expr2 = expr2;
}

bool AndExpression::interpreter(string con){        
    return expr1->interpreter(con) && expr2->interpreter(con);
}
