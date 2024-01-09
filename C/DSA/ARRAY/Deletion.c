#include<stdio.h>

//code for traversal
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}
int delete(int arr[], int size, int index)
{
    if(index>size-1)
    {
        return -1;
    }
    else
    {
        for(int i=index;i<size-1;i++)
        {
            arr[i] = arr[i+1];
        }
        
    }
}
int main()
{
    int arr[100] ={1,2,3,4,5,6};
    int size = 6, index = 0;
    delete(arr,size,index);
    size -=1;
    display(arr, size);
    return 0;
}
