#include<stdio.h>
int main()
{
    int n;
    printf("Enter the upper limit:       ");
    scanf("%d",&n);
    char ch;
    
    for(int i=0;i<n;i++)
    {
        ch = 'A';
        for(int j = 0; j<i;j++)
        {
            if(i%2==0 )
            {
                printf("%c ",ch);
                ch ++;
            }
            else
            {
            printf("* x");
            }
        }
    printf("\n");
    }
}