cmake_minimum_required(VERSION 3.31)
project(CBasics C)

set(CMAKE_C_STANDARD 11)

add_executable(CBasics main.c
        other.c
        other.h)
