#pragma once

#include <string>
#include "Amplifier.h"
#include "Tuner.h"
#include "DvdPlayer.h"
#include "CdPlayer.h"
#include "Projector.h"
#include "TheaterLights.h"
#include "Screen.h"
#include "PopcornPopper.h"

using namespace std;

class HomeTheaterFacade {
public:    
	Amplifier *amp;
	Tuner *tuner;
	DvdPlayer *dvd;
	CdPlayer *cd;
	Projector *projector;
	TheaterLights *lights;
	Screen *screen;
	PopcornPopper *popper;
 
	HomeTheaterFacade(Amplifier *amp, Tuner *tuner, DvdPlayer *dvd, CdPlayer *cd, 
       Projector *projector, Screen *screen, TheaterLights *lights, PopcornPopper *popper);
 
	void watchMovie(string movie);
	void endMovie();
	void listenToCd(string cdTitle);
	void endCd();
	void listenToRadio(double frequency);
	void endRadio();
};

