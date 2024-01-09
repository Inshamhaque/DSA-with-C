#include <stdio.h>
int main()
// to print all prime number between two numbers
{
    int n,flag=1;
    printf("what is the range:    ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        // checking whether the number is prime
        for(int j=2;j<i;j++)
        {
            if(j%i==0)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }  
        if(flag==0)
        {
            printf("%d is prime number \n",i);
        }
        else
        {
            continue;
        }
    
    
    }
}