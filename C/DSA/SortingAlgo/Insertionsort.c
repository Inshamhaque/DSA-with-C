// Insertion sort
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void insertsort(int *array, int n)
{   
    for(int i=1;i<n;i++)
    {
        int key = array[i];
        int j =i-1;
        while(j>=0 && array[j]>key)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}
void traversal(int* array, int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}
int main()
{
    // 0,1,2,3,4,5
    // 7,12,54,65,23,9
    int n = 6;
    int* arr = malloc(sizeof(int)*n);
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%10;
    }
    traversal(arr,n);
    insertsort(arr,n);
    traversal(arr,n);
    
    return 0;
}  