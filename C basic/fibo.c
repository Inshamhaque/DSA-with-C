#include<stdio.h>
int fib(int n);

int main()
{
    s = fib(3);
    printf("%d",s);


}
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    elseif(n==1)
    {
        return 1;
    }
    else
    {
        s=fib(n-1)+fib(n-2);
        return s; 
    }
}