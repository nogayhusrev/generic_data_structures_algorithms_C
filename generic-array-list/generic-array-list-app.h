#include <stdlib.h>
#include <stdio.h>
#include "generic-array-list.h"
#include "../print_functions/print_functions.h"
#ifndef DATA_STRUCTURES_ALGORITHMS_GENERIC_ARRAY_LIST_APP_H
#define DATA_STRUCTURES_ALGORITHMS_GENERIC_ARRAY_LIST_APP_H
#define  new_line() printf("\n")


typedef struct MyArrayListData{
    int age;
    char *name;
}array_list_data;


int generic_array_list_app() {

     array_list *arrayList = alCreate(100, sizeof(array_list_data));

    for (int i = 0; i < 10; i++) {
        array_list_data *data1;
        data1 = malloc(sizeof(array_list_data));
        data1->age = i;
        alAdd(arrayList,data1);
    }

    array_list_data **curr = arrayList->data;

    for (int i = 0; i < arrayList->lastIndex; i++) {
        printf("%d ", curr[i]->age);

    }

    new_line();

    alRemove(arrayList, alGet(arrayList,2));

    for (int i = 0; i < arrayList->lastIndex; i++) {
        printf("%d ", curr[i]->age);

    }


    return 0;
}


#endif //DATA_STRUCTURES_ALGORITHMS_GENERIC_ARRAY_LIST_APP_H
