#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Traversing LinkedList

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1: Insert a Node at the Beginning of the List

struct Node * insertAtBeginning(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr; 
}

// Case 2 : Insert a Node in between at a given index

struct Node * insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next = p->next;
    p->next=ptr;
    return head;
}

// Case 3 : Insert a Node at the End of the List

struct Node * insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data = data;
    while (p->next!=NULL)
    {
       p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

// Insert a Node after a Given Node

struct Node * insertAfterNode(struct Node *head,struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data = data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;

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
    // head = insertAtBeginning(head, 56);
    // head=insertAtIndex(head,56,1 );
    //  head=insertAtEnd(head,56);
    head = insertAfterNode(head, second,45);
    LinkedListTraversal(head);
    return 0;
}