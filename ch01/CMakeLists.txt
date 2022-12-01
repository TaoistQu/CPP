cmake_minimum_required(VERSION 3.23)
project(CPP)

set(CMAKE_CXX_STANDARD 11)

add_executable(CPP main.cpp include/test.h src/test.cpp)
