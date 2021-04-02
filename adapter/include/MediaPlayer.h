#ifndef MEDIA_PLAYER_H
#define MEDIA_PLAYER_H

#include <string>

using namespace std;

class MediaPlayer {
public:
   MediaPlayer();
   virtual void play(string audioType, string fileName)=0;
};

#endif
