//
// Created by Adrienn on 2025. 03. 20..
//

#ifndef LAB_05_STACK_H
#define LAB_05_STACK_H
#include <stdlib.h>
#include <stdio.h>
typedef struct{
    int capacity;
    int top;
    int *elements;
}Stack;
void createStack(int capacity,Stack * stack);
void destroyStack(Stack* stack);
bool isFull(Stack stack);
bool isEmpty(Stack stack);
void push(Stack* stack, int item);
int pop(Stack* stack);
int peek(Stack stack);
int size(Stack stack);
#endif //LAB_05_STACK_H
