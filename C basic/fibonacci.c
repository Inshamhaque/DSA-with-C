#include<stdio.h>
// fibonacci series
// fib = 0,   1,    1,    2,   3,  5,    8,   13,21,34.....
//       f(0),f(1), F(2),f(3),f(4),f(5),f(6)


/* int fibonacci(int n);
int main()
{
    int n;
    printf("enter the number:    ");
    scanf("%d",&n);
    printf("fibonacci of %d is %d",n,fibonacci(n));
}
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int fin1= fibonacci(n-1);
    int fin2= fibonacci(n-2);
    return fin1+fin2; 
}*/

//using loops

int main()
{
    int n;
    printf("enter the number :     ");
    scanf("%d",&n);
    int j=0;
    int i=1;
    printf("%d\t%d\t",j,i);
    if(n==0)
    {
        printf("fibonacci value is:  0  ");
    }
    else if (n==1)
    {
        printf("fibonacci value is:  1");
    }
    else
    {
        for(int i=1;i<n;i+=j)
        {
            j = i;
            printf("%d\t%d\t",j,i);
        }
    }


}