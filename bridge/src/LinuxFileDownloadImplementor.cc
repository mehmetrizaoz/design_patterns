#include "LinuxFileDownloadImplementor.h"
#include <string>
#include <iostream>

using namespace std;

void* LinuxFileDownloadImplementor::downloadFile(string path){
    return nullptr;
}

bool LinuxFileDownloadImplementor::storeFile(void * obj){
    cout << "File downloaded successfully in LINUX" << endl;
    return true;
}