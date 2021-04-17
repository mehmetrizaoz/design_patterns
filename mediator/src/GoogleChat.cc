#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include "ChatRoom.h"
#include "GoogleChat.h"
#include "Person.h"

using namespace std;

void GoogleChat::broadcast(string from, string msg) {
    for (auto p : m_people)
        if (p->m_name != from)
            p->receive(from, msg);
}

void GoogleChat::join(Person *p) {
    string join_msg = p->m_name + " joins the chat";
    broadcast("room", join_msg);
    p->m_room = this;
    m_people.push_back(p);
}

void GoogleChat::message(string from, string to, string msg) {
    auto target = find_if(begin(m_people), end(m_people), [&](const Person *p) {
        return p->m_name == to;
    });
    
    if (target != end(m_people)){ 
        (*target)->receive(from, msg);
    }
}
