cmake_minimum_required(VERSION 3.6)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

project(toDeleteMe)

enable_testing()


#set(SOURCE_FILES sample1.cpp)

#include_directories(../include  ~/usr/local/include)

#link_directories(~/usr/local/lib/)

#add_executable(toto sample1_unittest.cpp sample1.o)

#target_link_libraries(toto gtest)
#++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

cmake_minimum_required(VERSION 3.6)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set(LIBRARY_OUTPUT_PATH ../lib)

include_directories(../include)

add_library (foobars sample1.cpp)


