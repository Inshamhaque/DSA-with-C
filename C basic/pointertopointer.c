#include<stdio.h>
int main()
{
    float price = 100.0;
    float *ptr = &price;
    float **ptr = &ptr;
    printf("%d \n", *ptr);
}