//COcktail sort implementation
#include<stdio.h>
void cocktailsort(int *arr, int n)
{
    int swap = 1;
    int start = 0;
    int end = n-1;
    while(swap)
    {
        swap = 0;
        for(int i=start;i<end;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swap = 1;
            }
        }
        end--;
        if(!swap)
        {
            break;
        }
        swap = 0;
        for(int i = end;i>=start;i--)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swap = 1;
            }
        }
        start++ ;
    }
}
void traversal(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[7]  = {1,29,2,3,4,5,7}; 
    cocktailsort(arr,7);
    traversal(arr,7);
    return 0;
}