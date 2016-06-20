//
// Created by phanes on 6/19/16.
//
#include "FPtoSockTee.h"


// rxFilePipe rxFP = rxFilePipe("test");

rxFilePipe::rxFilePipe( const char *fname )
{
    this->filename = fname;
    this->errorlevel = mkfifo( this->filename, 0666 );
    this->handle = open( this->filename, O_RDONLY | O_NONBLOCK );
}
rxFilePipe::~rxFilePipe()
{
    close(this->handle);
    unlink(this->filename);
}

void rxFilePipe::getMessage(std::string *Message)
{
    int c;
    while ((c = fgetc( this->handle )) != '\0' && c != EOF)
    {
        Message->push_back(c);
    }
}
