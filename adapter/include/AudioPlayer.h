#ifndef AUDIO_ADAPTER_H
#define AUDIO_ADAPTER_H

#include "AdvancedMediaPlayer.h"
#include "MediaAdapter.h"
#include <string>

class AudioPlayer : public MediaPlayer {
public:
   MediaAdapter *mediaAdapter;
   void performPlay(string audioType, string fileName);
};

#endif
