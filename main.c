#include <stdio.h>
#include "Stack.h"

int main() {
    int choice = 10;
    StackNodePtr head = NULL;
    StackData data;
    while (choice != 0) {
        printf("1 - add\n");
        printf("2 - do\n");
        printf("3 - print\n");
        printf("4 - peek\n");
        printf("5 - pop\n");
        printf("0 - exit\n \n");

        scanf("%d", &choice);
        switch (choice) {
            case 1:
                findNewInfo(&data);
                stackInsert(&head, data);
                stackPrint(&head);
                break;
            case 2:
                stackDeleteEvenNum(&head);
                stackPrint(&head);
                break;
            case 3:
                stackPrint(&head);
                break;
            case 4:
                stackPeek(&head);
                stackPrint(&head);
                break;
            case 5:
                stackPop(&head);
                stackPrint(&head);
            case 0:
                break;
            default:
                choice = 10;
        }
    }
}
