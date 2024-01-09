#include<stdio.h>
void selectionsort(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        int minindex = i;
        for(int j=0;j<n;j++)
        {
            if(arr[j]<arr[minindex])
            {
                minindex = j;
            }
            int temp = arr[i];
            arr[i] = arr[minindex];
            arr[minindex] = temp;
        }
    }
}
void traversal(int* arr, int n)
{
    for(int i = 0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[5] = {5,4,3,2,1};
    selectionsort(arr,5);
    traversal(arr,7);  
    return 0;
}