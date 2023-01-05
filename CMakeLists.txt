cmake_minimum_required(VERSION 3.24)
project(data_structures_algorithms C)

set(CMAKE_C_STANDARD 11)

add_executable(data_structures_algorithms main.c linked-lists/generic-singly-linked-list.h linked-lists/generic-singly-linked-list.c linked-lists/generic-singly-linked-list-app.c)

