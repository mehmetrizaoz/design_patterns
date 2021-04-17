#ifndef GOOGLE_CHAT_H
#define GOOGLE_CHAT_H

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include "ChatRoom.h"
#include "Person.h"

using namespace std;


class GoogleChat : public ChatRoom{
public:   
    vector<Person*> m_people;
    void broadcast(string from, string msg);
    void join(Person *p);
    void message(string from, string to, string msg);
};


#endif