cmake_minimum_required(VERSION 3.24.2)
project(lab_05 C)

set(CMAKE_C_STANDARD 23)

add_executable(lab_05 main.c constants.h stack.h stack.c)
