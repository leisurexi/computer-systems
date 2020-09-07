cmake_minimum_required(VERSION 3.16)
project(compture_systems C)

set(CMAKE_C_STANDARD 99)

add_executable(main1 main.c include/csapp.h lib/csapp.c)
add_executable(main2 integer-operations.c binary-utils.c)
add_executable(main3 float-operations.c binary-utils.c)
add_executable(main4 byte-order.c binary-utils.c)
add_executable(main5 select-structure.c)
add_executable(main6 link/main.c link/sum.c link/addvec.c link/multvec.c link/main2.c link/vector.h link/dll.c link/interpose/int.c link/interpose/malloc.h link/interpose/mymalloc.c)
add_executable(main7 chapter8/fork.c)