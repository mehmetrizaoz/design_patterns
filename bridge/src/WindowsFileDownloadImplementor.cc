#include "WindowsFileDownloadImplementor.h"
#include <string>
#include <iostream>

using namespace std;

void* WindowsFileDownloadImplementor::downloadFile(string path){
    return nullptr;
}

bool WindowsFileDownloadImplementor::storeFile(void * obj){
    cout << "File downloaded successfully in LINUX" << endl;
    return true;
}