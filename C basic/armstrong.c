#include<stdio.h>
int main()
// armstrong number 

{
    int n;
    printf("enter the number:    ");
    scanf("%d",&n);
    int a=n%10;
    int b = (n/10)%10;
    int c= (n/100)%10;
    int num = a*a*a + b*b*b + c*c*c;
    printf("%d \n",num);
    if(num==n)
    {
        printf("it is an armstrong number");
    }
    else
    {
        printf("not an armstrong number");
    }
}