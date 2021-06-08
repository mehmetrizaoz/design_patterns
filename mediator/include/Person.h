#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "ChatRoom.h"

using namespace std;

class Person {
public:   
    string m_name;
    ChatRoom* m_room{nullptr};
    Person(string n);
    void say(string msg);
    void pm(string to, string msg);
    void receive(string from, string msg);
};

