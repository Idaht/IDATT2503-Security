cmake_minimum_required(VERSION 3.1)

project(Oppg1)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11 -Wall -Wextra")

add_executable(Oppg1 main.c)

enable_testing()

#("clang -g -fsanitize=fuzzer,address replace.h replace_fuzzer_test.c")

add_executable(main_test main_test.c)
target_compile_options(main_test PRIVATE -fsanitize=address)
target_link_options(main_test PRIVATE -fsanitize=address)
add_test(NAME main_test COMMAND main_test)

