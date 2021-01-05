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
  
    for(int i=index; i<size; i++)
    {
        arr[i] = arr[i+1]; // shifting indices by one place
    }
 
}
int main()
{
    int arr[100] = {7,8,12,27,88};
    int size=5, element =45, index=3;  //size of array =5
                                        //element to be inserted = 45 at index=3
    display(arr,size);
    indDeletion(arr,size, element, 100, index);
    size-=1;
    display(arr, size);
    return 0;
}