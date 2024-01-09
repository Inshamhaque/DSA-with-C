#include<stdio.h>
int main()
{
    int arr[] ={1,34,56,23,78,7};
    int size = *(&arr+1)-arr;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int max = arr[i];
                arr[i] = arr[j];
                arr[j] = max;
            }
        }

    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}