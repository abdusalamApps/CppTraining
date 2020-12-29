cmake_minimum_required(VERSION 3.17)
project(Training)

set(CMAKE_CXX_STANDARD 20)

add_executable(Training main.cpp Animal.h Cat.h Dog.h)