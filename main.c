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
    printf("\nInout the number of nodes: ");
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

    }

}