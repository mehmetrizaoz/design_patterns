#ifndef CHAT_ROOM_H
#define CHAT_ROOM_H

#include <string>

using namespace std;

class ChatRoom {
public:
    ChatRoom();
    virtual void broadcast(string from, string msg) = 0;
    virtual void message(string from, string to, string msg) = 0;
};

#endif