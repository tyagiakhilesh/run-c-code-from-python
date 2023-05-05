cmake_minimum_required(VERSION 3.25)
project(detect_foreign_chars_lib C)

set(CMAKE_C_STANDARD 17)

add_library(detect_foreign_chars_lib SHARED library.c main.c)
