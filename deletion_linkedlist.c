#include <stdio.h>
#include <stdlib.h>
struct Node
{
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
// Case 1: Deleting 1st element from the LinkedList
struct Node * deleteFirst(struct Node * head)
{
struct Node *ptr = head;
head = head->next;
free(ptr);
return head;
};
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
    head->data = 4;
    head->next = second;

    //Link Second and Third Node
    second->data = 3;
    second->next = third;

  //Link third and Fourth Node
    third->data = 8;
    third->next = fourth;

    //Terminate the list at the end
    fourth->data = 1;
    fourth->next = NULL;   
    LinkedListTraversal(head);
    head= deleteFirst(head);
    LinkedListTraversal(head);
    return 0;
}