#pragma once


#include <string>

using namespace std;

class AdvancedMediaPlayer {
public:
   virtual void playVlc(string fileName)=0;
   virtual void playMp4(string fileName)=0;   
};




