#include<stdio.h>
int main()
{
    char str[30];
    printf("enter the string:       ");
    scanf("%s",str);
    int length = 0;
    int flag;
    for(int i=0; str[i]!='\0';i++)
    {
        length += 1;
    }
    printf("%d\n",length);
    for(int j=0; j<length+1;j++ )
    {
        if(str[j]==str[length-j-1])
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("it is palindrome");
    }
    else
    {
        printf("it is not palindrome");
    }
}
