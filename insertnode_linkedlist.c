#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node * insertAtBeginning(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr; 
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    //Allocate memory for nodes in Heap Memory
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    //Linking First and Second Node
    head->data = 7;
    head->next = second;

    //Link Second and Third Node
    second->data = 10;
    second->next = third;

  //Link third and Fourth Node
    third->data = 14;
    third->next = fourth;

    //Terminate the list at the end
    fourth->data = 12;
    fourth->next = NULL;
    LinkedListTraversal(head);
    head = insertAtBeginning(head, 56);
    LinkedListTraversal(head);
    return 0;
}