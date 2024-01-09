#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int size = *(&arr+1)-arr;
    printf("%d ",size);
}