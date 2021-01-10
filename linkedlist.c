#include<stdio.h>

struct Node{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *head ;
    head = (struct Node *)malloc(sizeof(struct Node));
    return 0;
}