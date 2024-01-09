#include<stdio.h>
int factorial(int n);
//factorial using recursionki

int main()
{
    printf("factorisl is %d", factorial(3));
    return 0;
}

int factorial(int n)
{
    if (n==1){
        return 1;
    }
    int f = factorial(n-1);
    int fact = f * n;
    return fact;

}
