#ifndef AMPLIFIER_H
#define AMPLIFIER_H

#include <string>
#include "DvdPlayer.h"
#include "Tuner.h"
#include "CdPlayer.h"

using namespace std;

class DvdPlayer;
class Tuner;
class CdPlayer;

class Amplifier {
public:    
   string description;
   Tuner *tuner;
   DvdPlayer *dvd;
   CdPlayer *cd;
   Amplifier(string _description);
   void on();
   void off();
   void setStereoSound();
   void setSurroundSound();
   void setVolume(int level);
   void setTuner(Tuner _tuner);
   void setDvd(DvdPlayer _dvd);
   void setCd(CdPlayer _cd);
   string toString();
};

#endif