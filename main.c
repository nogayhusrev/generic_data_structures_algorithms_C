#include <stdio.h>
#include "generic-singly-linked-list/generic-singly-linked-list-app.h"
#include "generic-array-list/generic-array-list-app.h"
#define  new_line() printf("\n")


int main() {

    printf("==================Generic Singly Linked List App==================");
    new_line();
    generic_singly_linked_list_app();
    new_line();

    printf("==================Generic Array List App==================");
    new_line();
    generic_array_list_app();
    new_line();




    return 0;
}



