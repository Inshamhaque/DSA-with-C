#include<stdio.h>
int main()
{
    int arr[] = {10,11,12,13,15,16};
    int size = *(&arr+1)-arr;
    printf("size is : %d",size);
    return 0;
}