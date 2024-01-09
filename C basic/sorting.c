#include<stdio.h>
void sorting(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int max = arr[i];
                arr[i] = arr[j];
                arr[j]  = max;
            }

        }

    }
}


int main()
{
    int arr[30] = {8,4,90,87};
    int size = 4;
    sorting(arr, size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}