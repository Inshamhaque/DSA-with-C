#include<stdio.h>
// <to check whethe a given  number is binary or not>cxth 
int main()
{
    int num;
    scanf("%d",&num);
    int flag = 0;
    while(num>0)
    {
        int a = num%10;
        if(a!=0 && a!=1)
        {
            flag =0;
            break;
        }
        else
        {
            num = num/10;
            flag = 1;
        }
    }
    if(flag==1)
    {
        printf("it is binary");
    }
    else
    {
        printf("it is not binary");
    }
    return 0;
}