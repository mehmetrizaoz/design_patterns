#include "Amplifier.h"
#include "DvdPlayer.h"
#include <iostream>
#include <string>

using namespace std;

Amplifier::Amplifier(string description) {
    this->description = description;
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

void Amplifier::setTuner(Tuner tuner) {
    cout << description << " setting tuner to " << tuner.toString() << endl;
    this->tuner = &tuner;
}

void Amplifier::setDvd(DvdPlayer dvd) {
    cout << description << " setting DVD player to " << dvd.toString() << endl;
    this->dvd = &dvd;
}

void Amplifier::setCd(CdPlayer cd) {
    cout << description << " setting CD player to " << cd.toString() << endl;
    this->cd = &cd;
}

string Amplifier::toString() {
    return description;
}
