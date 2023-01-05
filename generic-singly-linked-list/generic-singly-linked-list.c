#include <stdlib.h>
#include <stdio.h>
#include "generic-singly-linked-list.h"



listNode *sllCreateNode(void *data);

singly_linked_list *sllCreate() {
    singly_linked_list *singlyLinkedList = malloc(sizeof(singly_linked_list));
    return singlyLinkedList;
}


void sllAdd(singly_linked_list *list, void *data){
    listNode * node = sllCreateNode(data);
    if (list->head == NULL){
        list->head = node;
        list->tail = list->head;
        list->tail->next = NULL;

    } else{
        list->tail->next = node;
        list->tail = node;
        list->tail->next = NULL;
    }
    list->size++;

}


void * sllSearch(singly_linked_list *list,void *data){
    listNode *current = list->head;
    if (current == NULL)
        return NULL;
    while (current){
        if (current->data == data)
            return data;
        current = current->next;
    }

    return NULL;
}

int sllGetSize(singly_linked_list *list){
    return list->size;
}


int sllDeleteNode(singly_linked_list *list, void *data){
    listNode *current = list->head;
    listNode *previous = NULL;
    int index = 0;

    //Search node of data
    while (current){
        if (current->data == data)
            break;
        previous = current;
        current = current->next;
        index++;
    }

    //If there is no match return null
    if (current == NULL){
        return -1;
    } else{
        //if data is head
        if (current == list->head){
            list->head = list->head->next;

            //if data is tail
        } else if (current == list->tail){
            previous->next = NULL;
            list->tail = previous;
        } else{
            previous->next = current->next;
        }
        list->size--;
        free(current);
        return index;
    }
}


listNode *sllCreateNode(void *data){
    listNode *node = malloc(sizeof (listNode));
    node->data = malloc(sizeof(data));
    node->data = data;

    return node;
}

void sllPrint(singly_linked_list *list,void (*printFunction)(void *data)){

    listNode *current = list->head;
    while (current){
        printFunction(current->data);
        current = current->next;
    }
}






