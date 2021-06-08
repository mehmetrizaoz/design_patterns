#pragma once

#include <string>

using namespace std;

class articleMemento{
public:    
    long id;
    string title;
    string content;     
    articleMemento();
    articleMemento(long id, string title, string content);
    long getId(); 
    string getTitle();
    string getContent();
};