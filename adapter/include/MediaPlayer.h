#ifndef MEDIA_PLAYER_H
#define MEDIA_PLAYER_H

#include <string>

using namespace std;

class MediaPlayer {
public:
   void play(string audioType, string fileName);
private:
   virtual void performPlay(string audioType, string fileName)=0;
};

#endif
