#ifndef PROJECTOR_H
#define PROJECTOR_H

#include "DvdPlayer.h"
#include <string>

using namespace std;

class DvdPlayer;

class Projector {
public:    
   string description;
   DvdPlayer *dvdPlayer;
   Projector(string description, DvdPlayer *dvdPlayer);
   void on();
   void off();
   void wideScreenMode();
   void tvMode();
   string toString();
};

#endif