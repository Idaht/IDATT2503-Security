cmake_minimum_required(VERSION 3.1)

project(Fuzzing)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11 -Wall -Wextra")

add_executable(Fuzzing main.c)
