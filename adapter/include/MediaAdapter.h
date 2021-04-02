#ifndef MEDIA_ADAPTER_H
#define MEDIA_ADAPTER_H

#include "AdvancedMediaPlayer.h"
#include "MediaPlayer.h"

class MediaAdapter : public MediaPlayer {
private:
   AdvancedMediaPlayer *advancedMusicPlayer;
public:   
   MediaAdapter(string audioType);
   void play(string audioType, string fileName);
};

#endif
