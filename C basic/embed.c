#include<stdio.h>
int main()
{
    float meas;
    float meas_1;
    char a;
    
    while(1)
    {
        printf("enter the value in 1st receiver:           ");
        scanf(" %d",&meas);
        printf("enter the second receiver:      ");
        scanf(" %d",&meas_1);
        if(meas>meas_1)
        {
            printf("LED1 will glow");
        }
        else
        {
            printf("LED2 will glow \n");
        }    
        
        printf("do you want to input more values(y/n) :      ");
            scanf(" %c",&a);
        if (a = 'y')
        {
            continue;
        }
        else
        {
            break;
        }
    
    }
}