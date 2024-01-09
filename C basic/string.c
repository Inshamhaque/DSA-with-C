#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    char new_str[30];
    printf("enter the string:      ");
    scanf("%[^\n]%*c",str);
    //printf("string is %s",str);
    for(int i=0;str[i]!='0';i++)
    {
        if(str[i]>65 && str[i]<122)
        {
            strcpy(new_str,str[i]);
        }
        else
        {
            continue;
        }
    }
    printf("new string is %s",new_str);
}