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
}
// Case 2: Deleting an element at a particular index from the LinkedList
struct Node * deleteAtIndex(struct Node * head, int index)
{
struct Node *p = head;
struct Node *q = head->next;
for(int i=0; i<index-1;i++)
{
    p=p->next;
    q=q->next;
}
p->next = q->next;
free(q);
return head;
}
// Case 3: Deleting an element at the end of the LinkedList
struct Node * deleteAtLast(struct Node * head)
{
struct Node *p = head;
struct Node *q = head->next;
while(q->next!=NULL)
{
    p=p->next;
    q=q->next;
}
p->next = NULL;
free(q);
return head;
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
//    head= deleteFirst(head);  Deleting 1st element from the linked list
    // head = deleteAtIndex(head, 2); // For deleting an element at index= 2
    head = deleteAtLast(head); // Deleting the last element from the list
    LinkedListTraversal(head);
    return 0;
}