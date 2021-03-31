#include <iostream>
#include <string>
#include "Amplifier.h"
#include "Tuner.h"
#include "DvdPlayer.h"
#include "CdPlayer.h"
#include "Projector.h"
#include "TheaterLights.h"
#include "Screen.h"
#include "PopcornPopper.h"
#include "HomeTheaterFacade.h"

using namespace std;

class Amplifier;
class DvdPlayer;
class CdPlayer;
class Projector;
class Screen;
class TheaterLights;
class PopcornPopper;

HomeTheaterFacade::HomeTheaterFacade(Amplifier *_amp, 
                Tuner *_tuner, 
                DvdPlayer *_dvd, 
                CdPlayer *_cd, 
                Projector *_projector, 
                Screen *_screen,
                TheaterLights *_lights,
                PopcornPopper *_popper) {
    amp = _amp;
    tuner = _tuner;
    dvd = _dvd;
    cd = _cd;
    projector = _projector;
    screen = _screen;
    lights = _lights;
    popper = _popper;
}

void HomeTheaterFacade::watchMovie(string movie) {
    cout << "Get ready to watch a movie..." << endl;
    popper->on();
    popper->pop();
    lights->dim(10);
    screen->down();
    projector->on();
    projector->wideScreenMode();
    amp->on();
    amp->setDvd(*dvd);
    amp->setSurroundSound();
    amp->setVolume(5);
    dvd->on();
    dvd->play(movie);
}

void HomeTheaterFacade::endMovie() {
    cout << "Shutting movie theater down..." << endl;
    popper->off();
    lights->on();
    screen->up();
    projector->off();
    amp->off();
    dvd->stop();
    dvd->eject();
    dvd->off();
}

void HomeTheaterFacade::listenToCd(string cdTitle) {
    cout << "Get ready for an audiopile experence..." << endl;
    lights->on();
    amp->on();
    amp->setVolume(5);
    amp->setCd(*cd);
    amp->setStereoSound();
    cd->on();
    cd->play(cdTitle);
}

void HomeTheaterFacade::endCd() {
    cout << "Shutting down CD..." << endl;
    amp->off();
    amp->setCd(*cd);
    cd->eject();
    cd->off();
}

void HomeTheaterFacade::listenToRadio(double frequency) {
    cout << "Tuning in the airwaves..." << endl;
    tuner->on();
    tuner->setFrequency(frequency);
    amp->on();
    amp->setVolume(5);
    amp->setTuner(*tuner);
}

void HomeTheaterFacade::endRadio() {
    cout << "Shutting down the tuner..." << endl;
    tuner->off();
    amp->off();
}
