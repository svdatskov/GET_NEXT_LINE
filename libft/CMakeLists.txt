cmake_minimum_required(VERSION 3.13)
project(ft C)

set(CMAKE_C_STANDARD 99)

file(GLOB SOURCES
        *.h
        *.c)

add_executable(libtest
        ${SOURCES})
