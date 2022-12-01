cmake_minimum_required(VERSION 3.23)
project(ch02)

set(CMAKE_CXX_STANDARD 11)

add_executable(ch02 main.cpp scr/teacher.cpp include/teacher.h)
