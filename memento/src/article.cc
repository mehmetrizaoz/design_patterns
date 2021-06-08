#include "article.h"
#include "articleMemento.h"
#include <iostream>

using namespace std;

class articleMemento;

article::article(long id, string title){    
    this->id = id;
    this->title = title;
}
       
articleMemento article::createMemento() 
{
    articleMemento *aa = new articleMemento(id, title, content);
    return *aa;
}
    
void article::restore(articleMemento m) {
    this->id = m.getId();
    this->title = m.getTitle();
    this->content = m.getContent();
}

void article::print() {
    cout << "Article [id=" << id << ", title=" << title << ", content=" << content << "]" << endl;
}
