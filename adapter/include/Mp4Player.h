#ifndef MP4_PLAYER_H
#define MP4_PLAYER_H

#include "AdvancedMediaPlayer.h"

class Mp4Player : public AdvancedMediaPlayer{
public:
   void playVlc(string fileName);
   void playMp4(string fileName);
};


#endif
