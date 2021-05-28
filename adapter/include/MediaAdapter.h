#pragma once

#include "AdvancedMediaPlayer.h"
#include "MediaPlayer.h"

class MediaAdapter : public MediaPlayer {
private:
   AdvancedMediaPlayer *advancedMusicPlayer;
public:   
   MediaAdapter(string audioType);
   void play(string audioType, string fileName);
};


