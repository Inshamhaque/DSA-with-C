#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int matrix[3][3];
    for(int i=0;i<=2;++i)
    {
        for(int j=0;j<=2;j++)
        {
            matrix[i] == rand()%10;
        }
    }
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //sorting
    int min= matrix[0][0];
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            if(matrix[i][j]<min)
            {
                int tmp = min;
                min = matrix[i][j];
                matrix[i][j] = tmp;
            }
        }
    }
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}