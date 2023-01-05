#include <stdio.h>
#include "generic-singly-linked-list.h"

void printInt(int *p);
int app();

typedef struct myData{
    int age;
    char *name;
}data;


int app() {

    sll *list = malloc(sizeof (sll));

    for (int i = 0; i < 10; i++) {
        data *data1;
        data1 = malloc(sizeof(data));
        data1->age = i;
        listNode *node = createSllNode(data1);
        addSll(list,node);
    }

    listNode *curr = list->head;
    while (curr){
        data *my = curr->data;
        printInt(&(my->age));
        curr = curr->next;
    }



    return 0;
}



void printInt(int *p) {
    printf("%d\n", *p);
}
