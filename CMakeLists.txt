cmake_minimum_required(VERSION 3.24)
project(data_structures_algorithms C)

set(CMAKE_C_STANDARD 11)

add_executable(data_structures_algorithms main.c generic-singly-linked-list/generic-singly-linked-list.h generic-singly-linked-list/generic-singly-linked-list.c generic-array-list/generic-array-list.c generic-array-list/generic-array-list.h generic-singly-linked-list/generic-singly-linked-list-app.h generic-array-list/generic-array-list-app.h print_functions/print_functions.c print_functions/print_functions.h)

