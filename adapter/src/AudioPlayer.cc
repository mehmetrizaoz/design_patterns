#include "AudioPlayer.h"
#include <string>
#include <iostream>

using namespace std;

void AudioPlayer::play(string audioType, string fileName){
   if(audioType == "mp3"){
       cout << "Playing mp3 file. Name: " << fileName << endl;
   }
   else if(audioType == "vlc" || audioType == "mp4"){
       mediaAdapter = new MediaAdapter(audioType);
       mediaAdapter->play(audioType, fileName);
   }
   else{
       cout << "Invalid media. " << audioType << " format not supported" << endl;
   }
}
