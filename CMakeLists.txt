cmake_minimum_required(VERSION 3.28)
project(Module_3_Coding_Exam)

set(CMAKE_CXX_STANDARD 17)

add_executable(Module_3_Coding_Exam exam2.cpp
        include/Person.h
        src/Person.cpp
        include/Movie.h
        src/Movie.cpp
        include/City.h
        include/Itinerary.h
        src/City.cpp
        src/Itinerary.cpp)
