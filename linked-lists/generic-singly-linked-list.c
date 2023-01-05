#include <stdlib.h>
#include <stdio.h>




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


void addSll(sll *list,listNode *node){

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

void * searchSll(sll *list,void *data){
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

int getSllSize(sll *list){
    return list->size;
}


void * deleteNodeSll(sll *list, void *data){
    listNode *current = list->head;
    listNode *previous = NULL;

    //Search node of data
    while (current){
        if (current->data == data)
            break;
        previous = current;
        current = current->next;
    }

    //If there is no match return null
    if (current == NULL){
        return NULL;
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
        return current;
    }
}


listNode *createSllNode(void *data){
    listNode *node = malloc(sizeof (listNode));
    node->data = malloc(sizeof(data));
    node->data = data;

    return node;
}

void printSll(sll *list,void (*printFunction)(void *data)){

    listNode *current = list->head;
    while (current){
        printFunction(current->data);
        current = current->next;
    }
}






