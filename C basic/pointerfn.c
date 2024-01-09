#include<stdio.h>
void square(int *n);
// function calling by address reference
int main()
{
    int number = 4;
    square(&number);
    printf("number is : %d   ", number);
}

void square(int *n)
{
    *n = (*n)*(*n);
    printf("square = %d  \n",*n);
}