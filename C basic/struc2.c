#include<stdio.h>
//structure to store complex numbers(using arrow operator):)
struct complex
{
    int real;
    int img;
};
int main()
{
    struct complex n1 = {5,8};
    struct complex *ptr = &n1;
    printf("The real part is %d \n",ptr->real);
    printf("the imaginary part is %d \n ",ptr->img);
    return 0;
}