cmake_minimum_required(VERSION 3.16)
project(compture_systems C)

set(CMAKE_C_STANDARD 99)

add_executable(main1 main.c binary-utils.c mstore.c main1.c)
add_executable(main2 integer-operations.c binary-utils.c)
add_executable(main3 float-operations.c binary-utils.c)
add_executable(main4 byte-order.c binary-utils.c)