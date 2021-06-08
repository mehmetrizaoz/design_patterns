#pragma once

#include <string>
#include "articleMemento.h"

using namespace std;

class article{
public:    
    long id;
    string title;
    string content;
    //articleMemento aa;

    article(long id, string title);            
    articleMemento createMemento();         
    void restore(articleMemento m);     
    void print();
};