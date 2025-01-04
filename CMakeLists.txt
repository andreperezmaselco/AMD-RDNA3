cmake_minimum_required(VERSION 3.22.1)

project(AMD-RDNA3 VERSION 1.0)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -ansi -Wall")

add_library(AMD-RDNA3 SHARED
            src/instructions/SOP1.c
            src/instructions/SOP2.c
            src/instructions/SOPK.c)

target_include_directories(AMD-RDNA3 PRIVATE include)
