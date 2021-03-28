#ifndef ADVANCED_MEDIA_PLAYER_H
#define ADVANCED_MEDIA_PLAYER_H

#include <string>

using namespace std;

class AdvancedMediaPlayer {
public:
   void playVlc(string fileName);
   void playMp4(string fileName);
private:
   virtual void performPlayVlc(string fileName)=0;
   virtual void performPlayMp4(string fileName)=0;   
};

#endif


