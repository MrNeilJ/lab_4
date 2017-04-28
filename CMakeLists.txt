cmake_minimum_required(VERSION 3.7)
project(lab_4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp University.cpp University.hpp Building.cpp Building.hpp Student.cpp Student.hpp People.cpp People.hpp Instructor.cpp Instructor.hpp inputCheck.hpp inputCheck.cpp menuMaker.hpp menuMaker.cpp)
add_executable(lab_4 ${SOURCE_FILES})