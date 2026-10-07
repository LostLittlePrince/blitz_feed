#pragma once

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

int Socket(int family, int type, int protocol)
{
    int fd {-1};
    
    if (fd = socket(family, type, protocol) < 0) [[unlikely]]
    {
        //TODO error function that looks at errno
    }
    
    return fd;
}