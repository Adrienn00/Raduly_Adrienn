//
// Created by Adrienn on 2025. 03. 20..
//

#include "array.h"

void createIntArray(int capacity, IntArray *pArray) {
    pArray->capacity = capacity;
    pArray->elements = (int *)calloc(capacity, sizeof (int));
    if(!pArray->elements){
        printf("MEMORY ERROR");
        exit(-1);
    }
    pArray->size = 0;
}

void deallocateIntArray(IntArray *pArray) {
    free(pArray->elements);
    pArray->capacity = 0;
    pArray->capacity = 0;
    pArray = NULL;
}

void printArray(IntArray array) {
    if(isEmpty(array)){
        printf("The array is empty\n");
    }
    else {
    for (int i = 0; i < array.size; ++i) {
        printf("%i\n", array.elements[i]);
    }
    }
}

bool isEmpty(IntArray array) {
    return array.size == 0;
}

bool isFull(IntArray array) {
    return array.capacity == array.size;
}

int getItemAt(IntArray array, int position) {
    if(position < 0 || position >= array.size){
        return INVALID_VALUE;
    }
    return array.elements[position];
}

void insertFirst(IntArray *pArray, int item) {
    if(isFull(*pArray)){
        printf("The array is full ");
        exit(-1);
    }
    for (int i = pArray->size; i > 0 ; --i) {
        pArray->elements[i] = pArray->elements[i-1];
    }
        pArray->elements[0] = item;
        pArray->size++;
}

void insertLast(IntArray *pArray, int item) {
    if(isFull(*pArray)){
        printf("The array is full ");
        exit(-1);
    }
    pArray->elements[pArray->size] = item;
    pArray->size++;
}

void insertAt(IntArray *pArray, int position, int item) {
    if(isFull(*pArray)){
        printf("The array is full ");
        exit(-1);
    }
    if(position < 0 || position >= pArray->size){
        exit( INVALID_VALUE);
    }
    for (int i = pArray -> size; i > position; i--) {
        pArray->elements[i] = pArray->elements[i-1];
    }
    pArray->elements[position] = item;
    pArray->size++;
}

void deleteItemAt(IntArray *pArray, int position) {
    if(position < 0 || position >= pArray->size){
        exit( INVALID_VALUE);
    }
    for (int i = position; i < pArray->size; i++) {
        pArray->elements[i] = pArray->elements[i+1];
    }
    pArray->size--;
}

int search(IntArray pArray, int item) {
    for (int i = 0; i < pArray.size; ++i) {
    if( pArray.elements[i] == item){
        return i;
    }
    }
}

bool update(IntArray *pArray, int position, int newItem) {
    if(position < 0 || position >= pArray->size){
        exit( INVALID_VALUE);
    }
    pArray->elements[position] = newItem;
}






