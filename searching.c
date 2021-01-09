#include<stdio.h>
#include<stdlib.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
       if (arr[i]==element)
       {
          return i;
       }
     
    }
      return -1;
}

int binarySearch(int arr[], int size, int element)
{
   int mid, high = size-1, low = 0;
   //keep searching until high and low converges
   while (low<=high)
   {
      mid = (low+high)/2;
   if (arr[mid]==element)
   {
      return mid;
   }
   if (arr[mid]<element)
   {
      low = mid+1;
   }
   else
   {
      high = mid-1;
   }
   }
   return -1;   
}

int main()
{
   //  int arr[] = {1,3,5,56,4,3,23,5,4,54634,56,34}; unsorted array for linear search
    int arr[] = {1,3,5,56,64,73,123,225,444,54634};
    int size = sizeof(arr)/sizeof(int);
    int element=56;
   //  int searchIndex = linearSearch(arr , size ,element);
   int searchIndex = binarySearch(arr , size ,element);
    printf("The element %d was found at index = %d \n", element, searchIndex);
    return 0;
}