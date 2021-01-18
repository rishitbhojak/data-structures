#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};

int main()
{
    struct Node * N1 = (struct Node *)malloc(sizeof(struct Node));
    return 0;
}