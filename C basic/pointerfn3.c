#include<stdio.h>
void dowork(int a , int  b, int *sum , int *pr, int *avg);
int main()
{  
    int sum, pr ,avg;
    dowork(5,3,&sum,&pr,&avg);
    printf("sum = %d, pro = %d & avg = %d", sum, pr, avg);
    
}
void dowork(int a , int  b, int *sum , int *pr, int *avg)
{
    *sum  = a+b;
    *pr = a*b;
    *avg = (a+b)/2;
    
}