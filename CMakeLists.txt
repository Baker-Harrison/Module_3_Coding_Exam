cmake_minimum_required(VERSION 3.28)
project(Module_3_Coding_Exam)

set(CMAKE_CXX_STANDARD 17)

add_executable(Module_3_Coding_Exam main.cpp
        include/Person.h
        src/Person.cpp
        include/Movie.h
        src/Movie.cpp)
