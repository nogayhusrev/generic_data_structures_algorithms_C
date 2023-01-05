#include <stdio.h>
#include "generic-singly-linked-list.h"
#include "../print_functions/print_functions.h"
#ifndef DATA_STRUCTURES_ALGORITHMS_GENERIC_SINGLY_LINKED_LIST_APP_H
#define DATA_STRUCTURES_ALGORITHMS_GENERIC_SINGLY_LINKED_LIST_APP_H





typedef struct MySinglyLinkedListData{
    int age;
    char *name;
}singly_linked_list_data;


int generic_singly_linked_list_app() {

    singly_linked_list *list = sllCreate();

    for (int i = 0; i < 10; i++) {
        singly_linked_list_data *data1;
        data1 = malloc(sizeof(singly_linked_list_data));
        data1->age = i;
        sllAdd(list,data1);
    }


    void (*printFunction)(void *data) = (void (*)(void *)) printInt;

    sllPrint(list,printFunction);


    return 0;
}




#endif //DATA_STRUCTURES_ALGORITHMS_GENERIC_SINGLY_LINKED_LIST_APP_H
