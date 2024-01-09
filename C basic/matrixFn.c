#include<stdio.h>
//int creatematrix(int arr[],int m , int n);
//int readmatrix();
int sum(int arr, int s , int k);
int main()
{
    int m=3,n=3,k=1,s=0;
    int arr[m][n];
    
    // creating matrix 
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter the element:      ");
            scanf("%d",arr[i][j]);
        }
    printf("\n");    
    //sum
    printf("which row is summed:     ");
    scanf("%d",&k);
    printf("sum of %dth row is: %d",k,sum(arr,s, k));
    
    }
}
int sum(int arr, int s, int k)
{
    int i= k;
    for(int j = 0;j<n;j++)
        {
            s += arr[i][j];
        }
    return s;


}
    


