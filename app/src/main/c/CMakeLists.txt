cmake_minimum_required(VERSION 3.15)
project(Optandroid)

set(CMAKE_C_STANDARD 99)

add_library(test_android_c_interface
        SHARED
        testing.c
        )

target_link_libraries(test_android_c_interface
        android
        log)
