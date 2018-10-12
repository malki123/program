 cmake_minimum_required(VERSION 3.12)
project(kalkulator C)

set(CMAKE_C_STANDARD 11)

add_executable(kalkulator
        kalkulator.c)
target_link_libraries(kalkulator m)