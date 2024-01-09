#include<stdio.h>
#include<string.h>
//palindrome checking
int main()
{
    char string[20],new_str[20];
    int a;
    printf("enter the string:     ");
    scanf("%s",string);
    a  = strlen(string);
    int flag = 0;
    for(int i=a-1;i>=0;i--)
    {
        if(string[a-i-1]==string[i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    if(flag==1)
    {
        printf("it is a palindrome");
    }
    else
    {
        printf("not a palindrome");
    }

}