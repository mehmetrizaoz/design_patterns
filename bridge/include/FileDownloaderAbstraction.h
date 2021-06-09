#pragma once

#include <string>

using namespace std;

class FileDownloaderAbstraction{
public:
    virtual void* download(string path)=0;     
    virtual bool store(void * object)=0;    
};