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
}sll;


void addSll(sll *list,listNode *node);

void * searchSll(sll *list,void *data);

int getSllSize(sll *list);

void * deleteNodeSll(sll *list, void *data);

listNode *createSllNode(void *data);

void printSll(sll *list,void (*printFunction)(void *data));




#endif
