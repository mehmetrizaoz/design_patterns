#pragma once


#include "AdvancedMediaPlayer.h"

class Mp4Player : public AdvancedMediaPlayer{
public:
   void playVlc(string fileName);
   void playMp4(string fileName);
};



