#include<stdio.h>
#include<stdlib.h>
void display(int arr[], int n)
{
    //Traversal
    for(int i=0;i<n;i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int arr[100] = {1,2,6,78};
    int size=4;
    display(arr,4);
    return 0;
}