//
// Created by phanes on 6/19/16.
//

#ifndef LINUX_IPC_TOOLS_FPTOSOCKTEE_H
#define LINUX_IPC_TOOLS_FPTOSOCKTEE_H

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "FPtoSockTee.h"
#include <string>

//class FPtoSockTee
//{
//private:
//    rxFilePipe rxFP;
    // Socket txSocket;
//};

class rxFilePipe
{
private:
    int errorlevel;
    const char *filename;
    int handle;

public:
    rxFilePipe(const char *fname);

    ~rxFilePipe();

    void getMessage(std::string *Message);
};
#endif //LINUX_IPC_TOOLS_FPTOSOCKTEE_H
