#include<stdio.h>

int main()
{
    int arr[3][4];
    // formation of matrix
    for(int i=0; i<3; i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("enter the value:    ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    
    // printing matrix
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<4;j++)
        {
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
        
    }





}   
