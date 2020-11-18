cmake_minimum_required(VERSION 3.17)
project(SchneiderApp)

set(CMAKE_CXX_STANDARD 14)

add_executable(SchneiderApp main.cpp fparser4.5.2/fparser.cc fparser4.5.2/fparser.hh Parser.cpp Parser.h Function.cpp Function.h)