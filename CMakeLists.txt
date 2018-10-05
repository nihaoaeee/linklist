cmake_minimum_required(VERSION 2.8)
project(list)


set(cmake_cxx_flags -std=c++11)

include_directories(
    ./include
)

add_executable(list main.cc)