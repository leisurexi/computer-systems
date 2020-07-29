cmake_minimum_required(VERSION 3.16)
project(compture_systems C)

set(CMAKE_C_STANDARD 99)

add_executable(main1 main.c binary-utils.c)
add_executable(main2 integer-operations.c binary-utils.c)