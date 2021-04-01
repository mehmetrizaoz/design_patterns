#include "CdPlayer.h"
#include <iostream>
#include <string>
#include "Amplifier.h"

using namespace std;


CdPlayer::CdPlayer(string description, Amplifier *amplifier) {
    this->description = description;
    this->amplifier = amplifier;
}

void CdPlayer::on() {
    cout << description << " on" << endl;
}

void CdPlayer::off() {
    cout << description << " off" << endl;
}

void CdPlayer::eject() {
    title = "";
    cout << description << " eject" << endl;
}

void CdPlayer::play(string title) {
    this->title = title;
    currentTrack = 0;
    cout << description << " playing \"" << title << "\"" << endl;
}

void CdPlayer::play(int track) {
    if (title == "") {
        cout << description << " can't play track " << currentTrack << 
                ", no cd inserted" << endl;
    } else {
        currentTrack = track;
        cout << description << " playing track " << currentTrack << endl;
    }
}

void CdPlayer::stop() {
    currentTrack = 0;
    cout << description << " stopped" << endl;
}

void CdPlayer::pause() {
    cout << description << " paused \"" << title << "\"" << endl;
}

string CdPlayer::toString() {
    return description;
}
