#pragma once


#include "AdvancedMediaPlayer.h"
#include "MediaAdapter.h"
#include <string>

class AudioPlayer : public MediaPlayer {
private:
   MediaAdapter *mediaAdapter;
public:   
   void play(string audioType, string fileName);
};


