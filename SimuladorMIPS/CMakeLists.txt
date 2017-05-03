cmake_minimum_required(VERSION 3.7)
project(SimuladorMIPS)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c intrucoesmips.c intrucoesmips.h simuladormips.c simuladormips.h auxiliary.c auxiliary.h)
add_executable(SimuladorMIPS ${SOURCE_FILES})