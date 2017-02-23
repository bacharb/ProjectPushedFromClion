cmake_minimum_required(VERSION 3.6)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

project(toDeleteMe)

enable_testing()

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set(LIBRARY_OUTPUT_PATH ../lib)

include_directories(../include)


file(GLOB SRCS *.cpp)


add_library (foobars sample1.cpp)


