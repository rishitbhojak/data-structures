#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
};
void LinkedListTraversal(struct Node * head)
{
    struct Node *ptr = head;
     printf("Element is %d", ptr->data);
        ptr = ptr->next;    
    do{
        printf("Element is %d", ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
}
struct Node * insertAtFirst(struct Node *head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p = head->next;
    while (p->next!=head)
    {
        p=p->next;
    }
    //At this stage, p points to the last node of this Circular LL
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
    third->data = 6;
    third->next = fourth;

    //Terminate the list at the end
    fourth->data = 1;
    fourth->next = NULL;
    LinkedListTraversal(head);
    insertAtFirst(head,80);
    LinkedListTraversal(head);
    return 0;
}