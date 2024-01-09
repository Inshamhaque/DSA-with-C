// Implementing Bubble Sort 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void bubblesort_adaptive(int* array, int n)
{
    int count_p = 0;
    int count_c = 0;
    int count_s = 0;
    int is_sorted = 0;
    for(int i=0;i<n-1;i++)//no of passes 
    {
        printf("working on %d pass:     ",i+1);
        is_sorted = 1;
        for(int j=0;j<n-i-1;j++)//no of comparison
        {
            if(array[j]>array[j+1])
            {
                int max = array[j];
                array[j] = array[j+1];
                array[j+1]=max;
                count_s++;
                is_sorted = 0;
            }
        count_c++;
        }
        if(is_sorted)
        {
            return;
        }
    count_p++;
    }
    printf("No of passes is: %d\n",count_p);
    printf("No of comparison is: %d\n",count_c);
    printf("No of swaps is: %d\n",count_s);
}
void bubblesort(int* array, int n)
{
    int count_p = 0;
    int count_c = 0;
    int count_s = 0;
    int is_sorted = 0;
    for(int i=0;i<n-1;i++)//no of passes 
    {
        for(int j=0;j<n-i-1;j++)//no of comparison
        {
            if(array[j]>array[j+1])
            {
                int max = array[j];
                array[j] = array[j+1];
                array[j+1]=max;
                count_s++;
            }
        count_c++;
        }
    count_p++;
    }
    printf("No of passes is: %d\n",count_p);
    printf("No of comparison is: %d\n",count_c);
    printf("No of swaps is: %d\n",count_s);
}
void traversal(int *array, int n)
{   
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }

}
int main()
{
    int n;
    printf("Enter the size:    \n");
    scanf("%d",&n);//size of array;
    int a[n];
    //creating array 
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {  
        a[i] = rand()%n;
    }
    //unsorted array
    traversal(a,n);
    printf("\n");
    bubblesort(a,n);
    //sorted array
    traversal(a,n);
    
    return 0;
} 