#include<stdio.h>
// linear search --> both sorted & unsorted array using traversal


void Linearsearch(int arr[], int size, int element)
{
    int flag = 0;
    int count = -1;
    for(int i= 0;i<size ;i++)
    {
        if(arr[i]==element)
        {
            flag = 1;
            count = i;
        }
        else
        {
            continue;
        }    
    }
    if(flag == 1)
    {
        printf("index is %d", count);
    }
    else
    {
        printf("element not found");
    }
}
int main()
{
    int arr[100] = {18,190,98,56,87,890,76,6};
    int element = 97;
    int size = 8;
    Linearsearch(arr,size,element);
    return 0;
}