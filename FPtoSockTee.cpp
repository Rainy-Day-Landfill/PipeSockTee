//
// Created by phanes on 6/19/16.
//

#include <sys/stat.h>
#include <bits/fcntl-linux.h>
#include <fcntl.h>
#include <unistd.h>
#include "FPtoSockTee.h"

class FPtoSockTee
{
    private:
        rxFilePipe rxFP;
};

class rxFilePipe
{
    private:
        std::int errorlevel;
        std::string filename;
        std::int handle;

    public:
        rxFilePipe( std::string fname )
        {
            this.filename = fname;
            this.errorlevel = mkfifo( this.filename, 0666 );
            this.handle = open( this.filename, O_RDONLY | O_NONBLOCK );
        }
        ~rxFilePipe()
        {
            close( this.handle );
            unlink( this.filename );
        }

        void rxFilePipe::getMessage(std::string *Message)
        {
            char c;
            while ((c = getc( this->handle )) != '\0' && c != EOF)
            {

            }
        }
};
