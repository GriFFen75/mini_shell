cmake_minimum_required(VERSION 3.22)
project(untitled1 C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled1 main.c mylib/mystring.c mylib/mystring.h)
