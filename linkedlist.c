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
    
    //Linking 1st and 2nd Node
    head->data=7;
    head->next=second;

    //Link third and Second Node
    second->data=10;
    second->next=third;

    //Terminate the list at the end
    third->data=12;
    third->next=NULL;
    return 0;
}