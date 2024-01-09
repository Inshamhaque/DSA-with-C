#include<stdio.h>
void swapnnumbers(a,b);
void swapnumbers(a,b);
int main()
{
    int x = 3, y =5;
    swapnumbers(&x,&y);
    printf("x = %d & y = %d \n ", x,y);
}
// call by value 
void swapnnumbers(int a,int b)
{
    int c  =  a;
    a = b;
    b = c;
    printf("a = %d & b = %d \n",a,b);
}
// call by reference
void swapnumbers(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b  = t;
    printf("a = %d, b = %d \n ", *a, *b);
}
