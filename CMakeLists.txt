# compile to build
# src main.cpp other dirs


# CMakeLists.txt:
cmake_minimum_required(VERSION 3.10)
project(myIDM)
add_executable(myIDM src/main.cpp
        src/test/SolutionTest.h
        src/test/SolutionTest.cpp)
