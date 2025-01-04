cmake_minimum_required(VERSION 3.22.1)

project(AMD-RDNA3.5-Instruction-Set-Architecture VERSION 1.0)

add_library(AMD-RDNA3.5 SHARED
            src/instructions/SOP2.c)

target_include_directories(AMD-RDNA3.5 PRIVATE include)
