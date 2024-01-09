#include <stdio.h>
int main()
{
int num;
printf("enter the number:      ");
scanf("%d",&num);
if(num%2==0)
{
    printf("it is divisible");
}
else{
    printf("not divisible");
}
return 0;
}