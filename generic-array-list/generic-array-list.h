#ifndef DATA_STRUCTURES_ALGORITHMS_GENERIC_ARRAY_LIST_H
#define DATA_STRUCTURES_ALGORITHMS_GENERIC_ARRAY_LIST_H

#define GROW_RATE 0.5




typedef struct ArrayList{
    void **data;
    unsigned int size;
    unsigned int lastIndex;
    unsigned int elementSize;
}array_list;

array_list *alCreate(int size, int elementSize);

array_list *alResize(array_list *arrayList);

void alAdd(array_list *arrayList, void *data);

void *alGet(array_list *arrayList,int index);

void *alSearch(array_list *arrayList, void *data);

int alGetSize(array_list *arrayList);

void alShift(array_list *arrayList, int index);

int alRemove(array_list *arrayList, void *data);

void alPrint(array_list *list,void (*printFunction)(void *data));

#endif //DATA_STRUCTURES_ALGORITHMS_GENERIC_ARRAY_LIST_H
