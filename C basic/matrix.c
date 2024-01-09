#include<stdio.h>
int main()
{
    int arr[3][3];
    // i--> rows\, j--> columns
    printf("enter the elements:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d\n",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("the %d,%d element is %d\n",i,j,arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
