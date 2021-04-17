#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "ChatRoom.h"
#include "Person.h"

using namespace std;


Person::Person(string n) : m_name(n) {}

void Person::say(string msg) { m_room->broadcast(m_name, msg); }

void Person::pm(string to, string msg) { m_room->message(m_name, to, msg); }

void Person::receive(string from, string msg) {
    string s{from + ": \"" + msg + "\""};
    cout << "[" << m_name << "'s chat session]" << s << "\n";
}
