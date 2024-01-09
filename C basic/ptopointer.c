#include<stdio.h>
int main()
{
    float price = 100.0;
    float *ptr = &price;
    float **pptr = &ptr;
    printf("%f \n", *ptr);
    printf("%f",&(*pptr));



}