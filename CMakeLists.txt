cmake_minimum_required(VERSION 3.8)
project(Lecture6_1)

set(CMAKE_CXX_STANDARD 11)

# Set files to compile
#set(SOURCE_FILES functions.cpp)
#set(SOURCE_FILES FunctionsStruct.cpp)
#set(SOURCE_FILES functionsreturns.cpp)
set(SOURCE_FILES Point.cpp)
add_executable(Lecture6_1 ${SOURCE_FILES})