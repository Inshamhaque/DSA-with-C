#include <stdio.h>
int main()
{
    int n,mult;
    printf("enetr numebr:    ");
    scanf("%d",&n);
    for(int i=10;i>=1;i-- )
    {
        mult= n*i;
        printf("%d*%d=%d \n",n,i,mult);
    }
}