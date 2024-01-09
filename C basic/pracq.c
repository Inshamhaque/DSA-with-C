#include<stdio.h>
// 2D array for tables of 2 and 3

int main()
{
    // creating array
    int table[2][10];
    for(int i=0;i<2;i++)
    {
        for(int j=0; j<10;j++)
        {
            if(i=0)
            {
                int r = 2*j;
                table[i][j] = r;
            }
            else
            {
                int f = 3*j;
                table[i][j] = f;
            }
        }
    }
    // reading array
    for(int i=0;i<2;i++)
    {
        for(int j = 0; j<10;j++)
        {
            printf("%d \t",&table[i][j]);
        }
        printf("\n");
    }
    return 0;

}