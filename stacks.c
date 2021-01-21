#include<stdio.h>
#include<stdlib.h>
//Implementing stacks using arrays
struct stack{
    int size;
    int top;
    int *arr;
};
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    return 0;
}