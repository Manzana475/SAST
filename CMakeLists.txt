cmake_minimum_required(VERSION 3.10)

project(VulnerableApp VERSION 1.0 LANGUAGES CXX)

add_executable(buffer buffer_overflow.cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
