#include <stdio.h>
int main()
{
    int n,i,mult;
    printf("enter the number whose table is to be made:     ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        mult = n*i;
        printf("%d*%d=%d \n",n,i,mult);
    }
}