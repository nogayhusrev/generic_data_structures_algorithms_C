#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#ifndef DATA_STRUCTURES_ALGORITHMS_LINKED_LIST_H
#define DATA_STRUCTURES_ALGORITHMS_LINKED_LIST_H



//Generic Singly Linked List Node
typedef struct listNode{
    void *data;
    struct listNode *next;
}listNode;

//Generic Singly Linked List Model
typedef struct SinglyLinkedList{
    listNode *head;
    listNode *tail;
    int size;
}singly_linked_list;

singly_linked_list *sllCreate();

void sllAdd(singly_linked_list *list, void *data);

void * sllSearch(singly_linked_list *list,void *data);

int sllGetSize(singly_linked_list *list);

void * sllRemove(singly_linked_list *list, void *data);

listNode *sllCreateNode(void *data);

void sllPrint(singly_linked_list *list,void (*printFunction)(void *data));




#endif
