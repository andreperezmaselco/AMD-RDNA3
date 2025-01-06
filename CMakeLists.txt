cmake_minimum_required(VERSION 3.22.1)

project(AMD-RDNA3 VERSION 1.0)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -ansi -Wall")

include(FetchContent)

FetchContent_Declare(googletest
                     URL https://github.com/google/googletest/releases/download/v1.15.2/googletest-1.15.2.tar.gz)

FetchContent_MakeAvailable(googletest)

add_library(AMD-RDNA3 SHARED
            src/instructions/SMEM.c
            src/instructions/SOP1.c
            src/instructions/SOP2.c
            src/instructions/SOPC.c
            src/instructions/SOPK.c
            src/instructions/SOPP.c
            src/instructions/VOP2.c)

target_include_directories(AMD-RDNA3 PRIVATE include)

add_executable(SOP2-test src/test/SOP2-test.cpp)

target_link_libraries(SOP2-test PRIVATE AMD-RDNA3 gtest_main)

target_include_directories(SOP2-test PRIVATE include)

add_test(NAME SOP2 COMMAND SOP2-test)
