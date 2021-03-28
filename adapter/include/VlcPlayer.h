#ifndef VLC_PLAYER_H
#define VLC_PLAYER_H

#include "AdvancedMediaPlayer.h"

class VlcPlayer : public AdvancedMediaPlayer{
public:
   void performPlayVlc(string fileName);
   void performPlayMp4(string fileName);
};


#endif
