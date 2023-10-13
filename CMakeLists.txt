message("Starting cmake...")

cmake_minimum_required(VERSION 3.25)
project(modelling)

set(CMAKE_CXX_STANDARD 20)

if (WIN32)
    set(CMAKE_MODULE_PATH "C:\\party\\SFML\\lib")
    set(SFML_DIR "C:\\party\\SFML\\lib\\cmake\\SFML")
    include_directories("C:\\party\\SFML\\include")
endif ()

if (LINUX)
    find_package(CURL REQUIRED)
    set(LINK_CURL, "-lcurl")
endif ()

find_package(SFML 2 REQUIRED COMPONENTS graphics audio network system)

add_executable(
        modelling
        main.cc
        game.cc
        game.h
        player.cc
        player.h
)

target_link_libraries(
        modelling
        sfml-graphics
        sfml-audio
        sfml-network
        sfml-system
        ${LINK_CURL}
)
message("Closing cmake...")