#include<stdio.h>
int main()
{
    int i=0; int n;
    int binary[32];
    printf("enter the number:     ");
    scanf("%d",&n);
    printf("\n");
    while(n>0)
    {
        binary[i] = n%2;
        n = n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d ",binary[j]);
    }
    return 0;
}