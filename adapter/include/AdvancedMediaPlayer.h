#ifndef ADVANCED_MEDIA_PLAYER_H
#define ADVANCED_MEDIA_PLAYER_H

#include <string>

using namespace std;

class AdvancedMediaPlayer {
public:
   AdvancedMediaPlayer();
   virtual void playVlc(string fileName)=0;
   virtual void playMp4(string fileName)=0;   
};

#endif


