cmake_minimum_required(VERSION 3.6)
project(CryptoHash)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES FiltreBloom.cpp Function.cc)
add_executable(CryptoHash ${SOURCE_FILES})