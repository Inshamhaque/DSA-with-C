#include<stdio.h>
int main()
{
    int arr[5] = {1,2,3,-1,4,5};
    int element = 23;
    if(arr[element%7]==-1)
    {
        arr[element%7] = element;
    }
    else
    {
        arr[(element+1)%7] = element;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}