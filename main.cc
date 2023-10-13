#include <iostream>

#ifdef _POSIX
//#include <sys/utsname.h>
#endif

#include "game.h"

int main(int argc, char *argv[]) {

#ifdef _POSIX
// Posix system information...
//    utsname info;
//    uname(&info);
//
//    std::cout << info.sysname << std::endl;
//    std::cout << info.machine << std::endl;
//    std::cout << info.version << std::endl;
//    std::cout << info.release << std::endl;
//    std::cout << info.nodename << std::endl;
#endif

    try {
        Game game;
        game.run(3);

    } catch (...) {
        std::cerr << "Something wrong..." << std::endl;
        std::terminate();
    }

    return 0;
}
