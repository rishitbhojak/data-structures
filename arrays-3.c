#include<stdio.h>
#include<stdlib.h>
void display(int arr[], int n)
{
    //Traversal
    for(int i=0;i<n;i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}
void indDeletion(int arr[],int size,int index)
{
    //Deletion
  
    for(int i=index; i<size-1; i++)
    {
        arr[i] = arr[i+1]; // shifting indices by one place i.e assigning value of right element to the left one
    }
 
}
int main()
{
    int arr[100] = {7,8,12,27,88};
    int size=5, index=1;  //size of array =5
                                        //element to be deleted = 8 at index=3
    display(arr,size);
    indDeletion(arr,size,index);
    size-=1;
    display(arr, size);
    return 0;
}