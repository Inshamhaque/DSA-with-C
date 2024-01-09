#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void traversal(int m, int n ,int arr[m][n])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
void sorting(int m , int n , int arr[m][n])
{
    int row=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]>arr[i][j+1])
            {
                int max  = arr[i][j];
                arr[i][j] = arr[i][j+1];
                arr[i][j+1] = max;
            }
        }
    }
    printf("\n");
}
int main()
{
    int arr[4][4];
    srand(time(NULL));
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            arr[i][j] = rand()%10;
        }
    }
    traversal(4,4,arr);
    sorting(4,4,arr);
    traversal(4,4,arr);
}