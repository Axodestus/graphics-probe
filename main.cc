#include <iostream>

#include <curl/curl.h>
#include <sys/utsname.h>

#include "game.h"


int main(int argc, char *argv[])
{
    // Posix system information...
    utsname info;
    uname(&info);

    std::cout << info.sysname << std::endl;
    std::cout << info.machine << std::endl;
    std::cout << info.version << std::endl;
    std::cout << info.release << std::endl;
    std::cout << info.nodename << std::endl;


    // Game entry point...
    try {
        Game game;
        game.run(3);

    } catch (...) {

        std::terminate();
    }

    return 0;
}
