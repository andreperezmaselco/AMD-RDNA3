cmake_minimum_required(VERSION 3.22.1)

project(AMD-RDNA3 VERSION 1.0)

add_library(AMD-RDNA3 SHARED
            src/instructions/SOP2.c
            src/instructions/SOPK.c)

target_include_directories(AMD-RDNA3 PRIVATE include)
