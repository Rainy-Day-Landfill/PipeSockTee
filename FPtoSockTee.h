//
// Created by phanes on 6/19/16.
//

#ifndef LINUX_IPC_TOOLS_FPTOSOCKTEE_H
#define LINUX_IPC_TOOLS_FPTOSOCKTEE_H

#include <string>

class FPtoSockTee
{
    private:
        rxFilePipe rxFP;
};

class rxFilePipe
{
    public:
        std::int ERRNO;
        std::string filename;
        rxFilePipe();
};

#endif //LINUX_IPC_TOOLS_FPTOSOCKTEE_H
