#include<stdio.h>
int main()
{
    int arr[9] = {0,1,2,3,4,5,6,7,8};
    for(int i=0;i<9;i+=2)
    {
        for(int j=1;j<9;j+=2)
        {
            if(j==i+1)
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i=0;i<9;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}