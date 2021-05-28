#pragma once


#include "AdvancedMediaPlayer.h"

class VlcPlayer : public AdvancedMediaPlayer{
public:
   void playVlc(string fileName);
   void playMp4(string fileName);
};



