#pragma once

#include <string>

using namespace std;

class FileDownloadImplementor{
public:
    virtual void * downloadFile(string path)=0;
    virtual bool storeFile(void * obj)=0;
};