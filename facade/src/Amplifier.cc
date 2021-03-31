#include "Amplifier.h"
#include "DvdPlayer.h"
#include <iostream>
#include <string>

using namespace std;

Amplifier::Amplifier(string _description) {
    description = _description;
}

void Amplifier::on() {
    cout << description << " on" << endl;
}

void Amplifier::off() {
    cout << description << " off" << endl;
}

void Amplifier::setStereoSound() {
    cout << description << " stereo mode on" << endl;
}

void Amplifier::setSurroundSound() {
    cout << description << " surround sound on (5 speakers, 1 subwoofer)" << endl;
}

void Amplifier::setVolume(int level) {
    cout << description << " setting volume to " << level << endl;
}

void Amplifier::setTuner(Tuner _tuner) {
    cout << description << " setting tuner to " << dvd->toString() << endl;
    *tuner = _tuner;
}

void Amplifier::setDvd(DvdPlayer _dvd) {
    cout << description << " setting DVD player to " << _dvd.toString() << endl;
    *dvd = _dvd;
}

void Amplifier::setCd(CdPlayer _cd) {
    cout << description << " setting CD player to " << _cd.toString() << endl;
    *cd = _cd;
}

string Amplifier::toString() {
    return description;
}
