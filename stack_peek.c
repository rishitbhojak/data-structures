#include<stdio.h>
#include<stdlib.h>
//Implementing stacks using arrays
struct stack{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int isEmpty(struct stack *ptr){
    if(ptr->top == -1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

void push(struct stack *ptr,int val)
{
    if(isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n",val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
    
}
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *sp, int i)
{
    if (sp->top-i+1<0)
    {
       printf("Not a valid position\n");
    }
    
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack created successfully\n");
    printf("Before pushing, Full = %d\n", isFull(sp));
    printf("Before pushing, Empty = %d\n", isEmpty(sp));
    push(sp, 1);
     push(sp, 2);
      push(sp, 3);
       push(sp, 4);
        push(sp, 5);
         push(sp, 6);
          push(sp, 7);
           push(sp, 8);
            push(sp, 9);
             push(sp, 10);//=====>>>>> Pushed 10 values
              push(sp, 11); // Stack overflow from here
    printf("After pushing, Full = %d\n", isFull(sp));
    printf("After pushing, Empty = %d\n", isEmpty(sp));
    printf("Popped %d from the stack\n", pop(sp)); // Last in First out 1st
    printf("Popped %d from the stack\n", pop(sp)); // Last in First out 2nd
    printf("Popped %d from the stack\n", pop(sp)); // Last in First out 3rd
    printf("Popped %d from the stack\n", pop(sp)); // Last in First out 4th
    return 0;
}