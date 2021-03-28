#ifndef MP4_PLAYER_H
#define MP4_PLAYER_H

#include "AdvancedMediaPlayer.h"

class Mp4Player : public AdvancedMediaPlayer{
public:
   void performPlayVlc(string fileName);
   void performPlayMp4(string fileName);
};


#endif
