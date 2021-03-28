#include "MediaAdapter.h"
#include "VlcPlayer.h"
#include "Mp4Player.h"

MediaAdapter::MediaAdapter(string audioType){
   if(audioType == "vlc"){
       advancedMusicPlayer = new VlcPlayer();
   }
   else if(audioType == "mp4"){
       advancedMusicPlayer = new Mp4Player();
   }
}

void MediaAdapter::performPlay(string audioType, string fileName){
   if(audioType == "vlc"){
       advancedMusicPlayer->playVlc(fileName);
   }
   else if(audioType == "mp4"){
       advancedMusicPlayer->playMp4(fileName);
   }
}

