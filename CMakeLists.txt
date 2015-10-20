cmake_minimum_required(VERSION 3.3)
project(dozydb)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11 -Wall -Wextra -g")



set(SOURCE_FILES src/dozydb.c tests/test_dozydb.c src/dozydb.h)
add_executable(dozydb ${SOURCE_FILES})