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
        printf("Stack Underflow! Cannot pop %d from the stack", val);
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
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
    push(sp, 56);
     push(sp, 56);
      push(sp, 56);
       push(sp, 56);
        push(sp, 56);
         push(sp, 56);
          push(sp, 56);
           push(sp, 56);
            push(sp, 56);
             push(sp, 56);//=====>>>>> Pushed 10 values
             push(sp, 56); // Stack overflow from here
    printf("After pushing, Full = %d\n", isFull(sp));
    printf("After pushing, Empty = %d\n", isEmpty(sp));
    return 0;
}