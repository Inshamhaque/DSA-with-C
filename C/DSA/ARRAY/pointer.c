#include<stdio.h>
int main()
{
    int i= 34;
    int *j;
    j = &i;
    printf("%d\n",&i);
    printf("%d\n",*j);
    printf("%u\n",*(&j));
    int **k;
    k = &j;
        printf("%d\n",&k);
    printf("%d\n",)
} 