#pragma once

#include <string>
#include "FileDownloadImplementor.h"

using namespace std;

class WindowsFileDownloadImplementor : public FileDownloadImplementor{
public:
    void* downloadFile(string path);
    bool storeFile(void * obj);
};