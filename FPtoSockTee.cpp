//
// Created by phanes on 6/19/16.
//

#include "FPtoSockTee.h"

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
