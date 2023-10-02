message("Starting cmake...")

cmake_minimum_required(VERSION 3.25)
project(modelling)

set(CMAKE_CXX_STANDARD 20)

find_package(SFML 2 REQUIRED COMPONENTS graphics audio network system)
find_package(CURL REQUIRED)

add_executable(
        modelling
        main.cc
        game.cc
        game.h
)

target_link_libraries(
        modelling
        sfml-graphics
        sfml-audio
        sfml-network
        sfml-system
        -lcurl
)
message("Closing cmake...")