#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "ChatRoom.h"
#include "GoogleChat.h"
#include "Person.h"

using namespace std;

int main() {
    GoogleChat room;
    
    Person john{"John"};
    Person jane{"Jane"};
    Person simon{"Simon"};

    room.join(&simon);
    room.join(&john);
    room.join(&jane);
    
    john.say("hi room");
    jane.say("oh, hey john");    
    simon.say("hi everyone!");
    jane.pm("Simon", "glad you found us, simon!");

    return EXIT_SUCCESS;
}
