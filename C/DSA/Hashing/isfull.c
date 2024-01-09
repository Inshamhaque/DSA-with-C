#include<stdio.h>
int isfull(int* arr, int position)
{
    if(arr[position] == NULL)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    printf("%d",isfull(arr,10));
    
    
    return 0;
}