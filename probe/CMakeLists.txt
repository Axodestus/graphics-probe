message("Starting cmake...")

cmake_minimum_required(VERSION 3.25)
project(probe)

set(CMAKE_CXX_STANDARD 23)

find_package(SFML 2 REQUIRED COMPONENTS graphics audio network system)
find_package(CURL REQUIRED)

add_executable(
        probe
        main.cc
)

target_link_libraries(
        probe
        sfml-graphics
        sfml-audio
        sfml-network
        sfml-system
        -lcurl
)
message("Closing cmake...")