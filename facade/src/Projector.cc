#include "Projector.h"
#include <iostream>
#include <string>
#include "DvdPlayer.h"

using namespace std;

Projector::Projector(string description, DvdPlayer *dvdPlayer) {
    this->description = description;
    this->dvdPlayer = dvdPlayer;
}

void Projector::on() {
    cout << description << " on" << endl;
}

void Projector::off() {
    cout << description <<  " off" << endl;
}

void Projector::wideScreenMode() {
    cout << description <<  " in widescreen mode (16x9 aspect ratio)" << endl;
}

void Projector::tvMode() {
    cout << description <<  " in tv mode (4x3 aspect ratio)" << endl;
}

string Projector::toString() {
    return description;
}
