#include <stdio.h>
// table of a number using function
int sum(int a, int b);
int main()
{
    int a;
    printf("enter no.:    ");
    scanf("%d",&a);
    table(a);
    return 0;
}
void table(int x)
{
    for(int i=1;i<=10;i++)
    {
        int mult = x*i;
        printf("%d*%d=%d \n",x,i,mult);
    }   
}