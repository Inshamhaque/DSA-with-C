#include<stdio.h>
// pointers 
int main()
{
    int x;
    int *ptr;
    ptr = &x;
    *ptr = 0;
    printf("x = %d \n",x);
    printf("*ptr = %d \n",*ptr );

    (*ptr)++;
    printf("%d \n",x);
    printf("%d",*ptr);

}

