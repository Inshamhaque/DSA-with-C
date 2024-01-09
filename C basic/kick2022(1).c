#include<stdio.h>
int main()
{
    int i[30];
    int p[30];
    scanf("%s",i);
    scanf("%s",p);
    if(strlen(p)>=strlen(i))
    {
        printf("impossible");   
    }
    
    return 0;
}