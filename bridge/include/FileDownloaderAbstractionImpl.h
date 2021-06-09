#pragma once

#include <string>
#include "FileDownloaderAbstraction.h"
#include "FileDownloadImplementor.h"

using namespace std;

class FileDownloaderAbstractionImpl : public FileDownloaderAbstraction{
public:
    FileDownloadImplementor *provider = nullptr;
    FileDownloaderAbstractionImpl(FileDownloadImplementor *provider);
    void* download(string path);     
    bool store(void * object);    
};