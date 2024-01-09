#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int newarr[7];
    for(int i =0;i<7;i++)
    {
        if(i<3)
        {
            newarr[i] = arr[i];
        }
        else if (i=3)
        {
            newarr[i] = 78;
        }
        else
        {
            newarr[i] = arr[i-1];
        }
        
    }
    for(int i =0;i<7;i++)
    {
        printf("%d ",newarr[i]);
    }

    
    return 0;
}