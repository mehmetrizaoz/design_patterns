#ifndef CD_PLAYER_H
#define CD_PLAYER_H

#include <string>
#include "Amplifier.h"

using namespace std;

class Amplifier;

class CdPlayer {
public:
   string description;
   int currentTrack;
   Amplifier *amplifier;
   string title;
   CdPlayer(string description, Amplifier *amplifier);
   void on();
   void off();
   void eject();
   void play(string title);
   void play(int track);
   void stop();
   void pause();
   string toString();
};

#endif