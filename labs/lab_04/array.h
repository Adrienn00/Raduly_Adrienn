//
// Created by Adrienn on 2025. 03. 20..
//

#ifndef LAB_04_ARRAY_H
#define LAB_04_ARRAY_H
#define INVALID_VALUE 9999
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int capacity;
    int size; //aktualis elemek szama
    int *elements;
}IntArray;

void createIntArray(int capacity, IntArray* pArray);
void deallocateIntArray(IntArray *pArray);
void printArray(IntArray array);
bool isFull(IntArray array);
bool isEmpty(IntArray array);
int getItemAt(IntArray array, int position);
void insertFirst(IntArray* pArray, int item);
void insertLast(IntArray* pArray, int item);
void insertAt(IntArray* pArray, int position, int item);
void deleteItemAt(IntArray* pArray, int position);
int search(IntArray pArray, int item);
bool update(IntArray* pArray, int position, int newItem);
void deallocateIntArray(IntArray *pArray);
#endif //LAB_04_ARRAY_H
