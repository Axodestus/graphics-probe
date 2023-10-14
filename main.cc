#include <iostream>

#ifdef __linux__
#include <sys/utsname.h>
#include <curl/curl.h>
#endif

#include "game.h"

int main(int argc, char *argv[]) {

#ifdef __linux__
    utsname info;
    uname(&info);

    std::cout << info.sysname << std::endl;
    std::cout << info.machine << std::endl;
    std::cout << info.version << std::endl;
    std::cout << info.release << std::endl;
    std::cout << info.nodename << std::endl;
#endif

    try {
        Game game;
        game.run(1);

    } catch (...) {
        std::cerr << "Something wrong. Stack is over!" << std::endl;
        std::terminate();
    }

    return 0;
}
