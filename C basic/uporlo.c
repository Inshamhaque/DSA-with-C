#include<stdio.h>
int main()
{
char ch;
printf("enter the character:    ");
scanf("%c",&ch);
if (ch>='a'&& ch<='z')
{
    printf("it is lower \n");
    ch += 32;
    printf("new char is %c \n",ch);
}
else
{
    printf("it is upper character \n");
    ch=- 32;
    printf("new char is %c \n",ch);
}
return 0;
}