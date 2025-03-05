cmake_minimum_required(VERSION 3.24.2)
project(lab_02 C)

set(CMAKE_C_STANDARD 23)

add_executable(lab_02 main.c utils.c utils.h ../lab_03/main.c)
