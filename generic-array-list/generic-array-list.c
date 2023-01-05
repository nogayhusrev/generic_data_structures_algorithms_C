#include <stdlib.h>
#include <printf.h>
#include <memory.h>
#include "generic-array-list.h"



array_list *alCreate(int size, int elementSize){
    array_list *arrayList = malloc(sizeof(arrayList));
    arrayList->size = size;
    arrayList->elementSize = elementSize;
    arrayList->data = malloc(arrayList->elementSize * arrayList->elementSize);
    arrayList->lastIndex = 0;
    return arrayList;
}

array_list *alResize(array_list *arrayList){
    int newSize = (arrayList->size) + ((arrayList->size) * 0.5 );
    void *temp = realloc(arrayList->data, newSize * arrayList->elementSize);
    if (temp != NULL) {
        arrayList->size = newSize;
        arrayList->data = temp;
    }


}

//void alAdd(array_list *arrayList, void *data) {
//    if (arrayList->lastIndex >= arrayList->size) {
//        alResize(arrayList);
//        printf("resized\n");
//    }
//    memcpy(arrayList->data + (arrayList->lastIndex) * (arrayList->elementSize), data, arrayList->elementSize);
//    arrayList->lastIndex++;
//}

void alAdd(array_list *arrayList, void *data) {

    if (arrayList->lastIndex >= arrayList->size) {
        alResize(arrayList);
        printf("resized\n");
    }

    arrayList->data[arrayList->lastIndex++] = data;

}

void *alGet(array_list *arrayList,int index){
    return arrayList->data[index];
}

void *alSearch(array_list *arrayList, void *data){
    void **curr = arrayList->data;
    while (curr){
        if(curr == data)
            return curr;
        curr++;
    }
    return NULL;
}

int alGetSize(array_list *arrayList){
    return arrayList->size;
}

void alShift(array_list *arrayList, int index){
    for (int i = index; i < arrayList->lastIndex; i++) {
        arrayList->data[i] = arrayList->data[i+1];
    }
}

int alRemove(array_list *arrayList, void *data){
    void **curr = arrayList->data;
    int index;

    if (curr == NULL)
        return -1;

    for (index = 0; index < arrayList->lastIndex; index++) {
        if (curr[index] == data)
            break;
    }

    if (index >= arrayList->lastIndex) {
        return -1;
    }else{
        free(arrayList->data[index]);
        alShift(arrayList,index);
        arrayList->lastIndex--;
        return index;
    }


}

void alPrint(array_list *arrayList,void (*printFunction)(void *data)){

    array_list *curr = arrayList->data[0];
    while (curr){
        printFunction(curr);
        curr++;
    }
}


















