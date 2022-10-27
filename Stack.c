//
// Created by zhenya on 27.10.2022.
//

#include "Stack.h"
#include "stdio.h"

void stackPrint(StackNodePtr *head){
    StackNodePtr currPtr = *head;
    while (currPtr != NULL){
        printf("%d\n", currPtr->data.number);
        currPtr = currPtr->nextItem;
    }
}

void stackInsert(StackNodePtr *head, StackData data){
    StackNodePtr currPtr = *head;
    if(currPtr == NULL){
        StackNodePtr tmp = malloc(sizeof(StackNode));
        tmp->data = data;
        tmp->nextItem = NULL;
        *head = tmp;
    } else {
        StackNodePtr tmp = malloc(sizeof(StackNode));
        if ((*head)->nextItem == NULL){
            tmp->nextItem = NULL;
        } else {
            tmp->nextItem = (*head)->nextItem;
        }
        tmp->data = (*head)->data;
        (*head)->data = data;
        (*head)->nextItem = tmp;
    }
}

void stackPeek(StackNodePtr *head){
    printf("Last element: %d\n", (*head)->data.number);
}

void stackPop(StackNodePtr *head){
    printf("Pop result: %d\n", (*head)->data.number);
    (*head) = (*head)->nextItem;
}

void stackDeleteEvenNum(StackNodePtr *head) {
    StackNodePtr tmpPtr, prevPtr, curPtr;
    while (*head != NULL && (*head)->data.number % 2 == 0) {
        tmpPtr = *head;
        *head = (*head)->nextItem;
        free(tmpPtr);
    }
    prevPtr = *head;
    curPtr = (*head);
    while (curPtr != NULL) {
        if (curPtr->data.number % 2 == 0) {
            prevPtr->nextItem = curPtr->nextItem;
        }
        prevPtr = curPtr;
        curPtr = curPtr->nextItem;
    }
}

void findNewInfo(StackData *toFind) {
    printf("Add new number: ");
    scanf("%d", &(*toFind).number);
}

