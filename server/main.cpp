#include "common.hpp"

namespace server
{
    
void run() 
{
    int listenfd = Socket(AF_INET, SOCK_STREAM, 0);
    
    sockaddr_in servaddr
    {
        .sin_family { AF_INET },
        .sin_port { port }
    };
    servaddr.sin_addr.s_addr { INADDR_ANY };
        
}
    
}

int main(int argc, char* argv[])
{   
    // TODO parse the port and pass to run function
    server::run();
    return 0; 
}