#include<stdio.h>

//code for traversal
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}
//code for sorting
void sortArray(int arr[],int size)
{
    int max;
    for(int i=0;i<size;i++)
    {
        for(int j = i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                max = arr[i];
                arr[i] = arr[j];
                arr[j] = max;
            }
        }
    }
}
int main()
{
    int arr[100] = {67,98,56 ,768, 879 , 869, 867, 983, 968 , 100092, 2788827};
    int size = 11;
    sortArray(arr,size);
    display(arr, size);
    return 0;
}