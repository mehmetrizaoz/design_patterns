#include <vector>
#include <string>
#include <iostream>
#include "FileDownloaderAbstraction.h"
#include "FileDownloaderAbstractionImpl.h"
#include "WindowsFileDownloadImplementor.h"
#include "LinuxFileDownloadImplementor.h"

using namespace std;

int main() {

    FileDownloaderAbstraction *downloader = nullptr;
    downloader = new FileDownloaderAbstractionImpl( new WindowsFileDownloadImplementor() );
    void * fileContent = downloader->download("some path");
    downloader->store(fileContent);
    
    return EXIT_SUCCESS;
}
