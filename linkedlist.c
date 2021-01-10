#include<stdio.h>

struct Node{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *head ;
    struct Node *second;
    struct Node *third;

    //Allocate memory for nodes in Heap Memory
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    return 0;
}