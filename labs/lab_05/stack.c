//
// Created by Adrienn on 2025. 03. 20..
//

#include "stack.h"

void createStack(int capacity, Stack *stack) {
    stack->capacity = capacity;
    stack->elements = (int *)calloc(capacity, sizeof (int));
    if(!stack->elements){
        printf("MEMORY ERROR");
        exit(-1);
    }
    stack->top = -1;
}

