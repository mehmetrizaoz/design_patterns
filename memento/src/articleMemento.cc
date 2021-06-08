#include "articleMemento.h"
#include <iostream>

using namespace std;
    
articleMemento::articleMemento(long id, string title, string content) {
    this->id = id;
    this->title = title;
    this->content = content;
}

long articleMemento::getId() {
    return id;
}

articleMemento::articleMemento(){}

string articleMemento::getTitle() {
    return title;
}

string articleMemento::getContent() {
    return content;
}
