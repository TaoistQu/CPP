cmake_minimum_required(VERSION 3.23)
project(ch03)

set(CMAKE_CXX_STANDARD 11)

include_directories(include include/my_string)

add_executable(ch03 main.cpp include/Box.h src/Box.cpp src/Teacher.cpp include/Teacher.h src/CAnimal.cpp include/CAnimal.h include/new_delete.h src/new_delete.cpp src/abc.cpp include/abc.h src/MyD.cpp include/MyD.h src/Test.cpp include/Test.h src/Sheep.cpp include/Sheep.h include/my_string/test_string.h
        src/my_string/test_string.cpp)
