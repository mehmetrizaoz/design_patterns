#ifndef MEDIA_ADAPTER_H
#define MEDIA_ADAPTER_H

#include "AdvancedMediaPlayer.h"
#include "MediaPlayer.h"

class MediaAdapter : public MediaPlayer {
public:
   AdvancedMediaPlayer *advancedMusicPlayer;
   MediaAdapter(string audioType);
   void performPlay(string audioType, string fileName);
};

#endif
