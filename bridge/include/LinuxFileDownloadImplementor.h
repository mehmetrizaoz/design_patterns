#pragma once

#include <string>
#include "FileDownloadImplementor.h"

using namespace std;

class LinuxFileDownloadImplementor : public FileDownloadImplementor{
public:
    void* downloadFile(string path);
    bool storeFile(void * obj);
};