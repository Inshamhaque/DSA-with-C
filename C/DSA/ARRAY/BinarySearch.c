#include<stdio.h>
// Binary search -> Sorted array only 
int binarysearch(int arr[], int size, int element)
{
    int low = 0, high = size-1;
    int mid;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid]==element)
        {
            return mid;
        }
        if(arr[mid]<element)
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
    int arr[100] = {1,3,5,56,64,73,123,225,444}; 
    int size =  9;
    int element = 78;
    int search = binarysearch(arr,size,element);
    printf("%d",search);
    return 0;
}