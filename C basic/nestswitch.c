#include<stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;
    int _page = *ptr;
    printf("%d \n", age);
    printf("%d",*ptr);
    printf("%d",*(&age));


}