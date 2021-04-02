#ifndef VLC_PLAYER_H
#define VLC_PLAYER_H

#include "AdvancedMediaPlayer.h"

class VlcPlayer : public AdvancedMediaPlayer{
public:
   void playVlc(string fileName);
   void playMp4(string fileName);
};


#endif
