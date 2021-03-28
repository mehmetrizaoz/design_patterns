//Auth: Mehmet Rıza Öz
//Desc: Java code coverted to C++    
//Reso: https://www.tutorialspoint.com/design_pattern/adapter_pattern.htm

#include "AudioPlayer.h"
#include <iostream>

using namespace std;

int main() {
      AudioPlayer *audioPlayer = new AudioPlayer();

      audioPlayer->play("mp3", "beyond the horizon.mp3");
      audioPlayer->play("mp4", "alone.mp4");
      audioPlayer->play("vlc", "far far away.vlc");
      audioPlayer->play("avi", "mind me.avi");

   return 0;
}
