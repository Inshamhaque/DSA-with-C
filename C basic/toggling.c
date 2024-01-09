#include<stdio.h>
int  main()
{
    char str[30];
    printf("enter the string:     ");
    scanf("%[^\n]%*c",str);
    for(int i = 0;str[i]!='\0';i++)
    {
        if (str[i]>='A'&& str[i]<='Z')
        {
            str[i] += 32;
        }
        else
        {
            str[i]-= 32;
        }
    }
    printf("string is %s",str);
}