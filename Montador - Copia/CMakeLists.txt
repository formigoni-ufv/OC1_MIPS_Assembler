cmake_minimum_required(VERSION 3.7)
project(MontadorMIPS)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c montadormips.c misc_functions.c instrucoesmips.c)
add_executable(montadormips ${SOURCE_FILES})