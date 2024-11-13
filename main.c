#include <stdio.h>
#include <stdlib.h>


struct node {
    int num;
    struct node *nextPtr;
}*stNode;

void createNodeList(int n);
void displayList();

int main(void) {
    //  1. Write a program in C to create and display a Singly Linked List.
    int n;
    printf("\nInput the number of nodes: ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\nData entered in the list: ");
    displayList();
    return 0;
}

void createNodeList(int n) {
    struct node *fnNode, *tmp;
    int  num, i;

    stNode = (struct node*)malloc(sizeof(struct node));

    if (stNode == NULL) {
        printf("Memory can not be allocated.");
    } else {
        printf("Input data for node 1: ");
        scanf("%d", &num);
        stNode->num = num;
        stNode->nextPtr = NULL;
        tmp = stNode;
    }

    for (i = 2; i <= n; i++) {
        fnNode = (struct node *) malloc(sizeof(struct node));
        if (fnNode == NULL) {
            printf("Memory can not be allocated.");
            break;
        } else {
            printf("Input data for node %d: ", i);
            scanf("%d", &num);
            fnNode->num = num;
            fnNode->nextPtr = NULL;

            tmp->nextPtr = fnNode;
            tmp = tmp->nextPtr;
        }
    }

}

void displayList() {
    struct node *tmp;

    if (stNode == NULL) {
        printf("List is empty.");
    } else {
        tmp = stNode;

        while (tmp != NULL) {
            printf("\nData = %d", tmp->num);
            tmp = tmp->nextPtr;
        }
    }

}
