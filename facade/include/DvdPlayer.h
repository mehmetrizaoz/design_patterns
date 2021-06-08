#pragma once

#include <string>
#include "Amplifier.h"

using namespace std;

class Amplifier;

class DvdPlayer {
public:
	string description;
	int currentTrack;
	Amplifier *amplifier;
	string movie;
	DvdPlayer(string description, Amplifier *amplifier);
	void on();
	void off();
    void eject();
	void play(string movie);
	void play(int track);
	void stop();
	void pause();
	void setTwoChannelAudio(); 
	void setSurroundAudio();	
 	string toString();	
};
