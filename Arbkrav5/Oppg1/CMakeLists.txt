cmake_minimum_required(VERSION 3.1)

project(Oppg1)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11 -Wall -Wextra")

add_executable(Oppg1 main.c)

add_executable(maint_test main_test.c)

#("clang -g -fsanitize=fuzzer,address replace.h replace_fuzzer_test.c")
