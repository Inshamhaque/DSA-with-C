#include <stdio.h>
int main()
// check whther prime or not 
{
    int flag, n;
    printf("enter the number:    ");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag = 1;
        }
       else
        {
            flag = 0;
            
        }
    }
    if(flag == 0)
    {
        printf("it is prime number");
    }

    else
    {
        printf("it is not prime number ");   
    }
    

}