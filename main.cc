#include <iostream>
#include <curl/curl.h>
#include <sys/utsname.h>

#include "game.h"


int main(int argc, char *argv[])
{
    utsname info;
    uname(&info);
    std::cout << info.sysname << std::endl;
    std::cout << info.machine << std::endl;

    Game game;
    game.run();

    return 0;
}
