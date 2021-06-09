#include <string>
#include "FileDownloaderAbstractionImpl.h"

using namespace std;

FileDownloaderAbstractionImpl::FileDownloaderAbstractionImpl(FileDownloadImplementor *provider) {    
    this->provider = provider;
}

void * FileDownloaderAbstractionImpl::download(string path){
    return this->provider->downloadFile(path);
}

bool FileDownloaderAbstractionImpl::store(void * object){
    return this->provider->storeFile(object);
}
