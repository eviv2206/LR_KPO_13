//
// Created by zhenya on 27.10.2022.
//

#ifndef UNTITLED21_STACK_H
#define UNTITLED21_STACK_H

#include <stdlib.h>

typedef struct Data{
    int number;
}StackData;

typedef struct StackNode{
    StackData data;
    struct StackNode *nextItem;
}StackNode;

typedef StackNode* StackNodePtr;

void stackPrint(StackNodePtr *);
void stackInsert(StackNodePtr *, StackData);
void stackPeek(StackNodePtr *);
void stackPop(StackNodePtr *);
void stackDeleteEvenNum(StackNodePtr *);
void findNewInfo(StackData *);

#endif //UNTITLED21_STACK_H
