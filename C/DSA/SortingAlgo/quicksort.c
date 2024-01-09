#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void traversal(int *arr, int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int partition(int *arr,int low, int high)
{
    int pivot = arr[low];
    int i = low+1;
    int j = high;
    int temp;
    do
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }while(i<j);
    temp = arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    traversal(arr,5);
    return j;
}
void quicksort(int* arr, int low, int high)
{
    int part_index;
    
    if(low<high)
    {
        part_index = partition(arr, low, high);
        quicksort(arr,low ,part_index-1);//sort left subarray
        quicksort(arr,part_index+1,high);//sort right subarray
        //printing array at each step traversal(arr,5);
    }
    
}
int main()
{
    int size=5;
    int arr[5] = {3,8,4,7,5};
    traversal(arr,size);
    quicksort(arr,0,size-1);
    traversal(arr,size);
}