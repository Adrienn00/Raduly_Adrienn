#include <stdio.h>
#include "array.h"

int main(void) {
    IntArray array;
    createIntArray(10,&array);
    printArray(array);
    printf("\n");
    insertLast(&array, 10);
    printf("InsertLast\n");
    printArray(array);
    printf("\n");
    insertFirst(&array,20);
    printf("InsertFirst\n");
    printArray(array);
    printf("\n");
    insertLast(&array,30);
    printf("InsertLast\n");
    printArray(array);
    printf("\n");
    insertFirst(&array,5);
    printf("InsertFirst\n");
    printArray(array);
    printf("\n");
    insertAt(&array,2,15);
    printf("InsertAt position 2\n");
    printArray(array);
    printf("\n");
    int item = getItemAt(array,2);
    printf("2.Item:%i\n",item);
    int index = search(array,4);
    printf("4.Index:%i\n", index);
    update(&array,1,13);
    printf("Update:\n");
    printArray(array);
    printf("\n");
    deleteItemAt(&array,3);
    printf("DeleteItemAt\n");
    printArray(array);
    printf("\n");
    deallocateIntArray(&array);
    return 0;
}
