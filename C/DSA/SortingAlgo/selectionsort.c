// Selection Sort
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void selectionSort(int *array, int n)
{
    printf("running selection sort\n");
    for(int i=0;i<n-1;i++)
    {
        int min_index = i;
        for(int j=i+1;j<n;j++)
        
        {
            if(array[j]<array[min_index])
            {
                min_index = j;
            }
        }
        int temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
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
    int size = 5;
    int a[size];
    srand(time(NULL));
    for(int i=0;i<size;i++)
    {
        a[i] = rand()%10;
    }
    traversal(a,size);
    selectionSort(a,size);
    traversal(a,size);
    return 0;
}