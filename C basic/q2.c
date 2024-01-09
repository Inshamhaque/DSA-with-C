// to check 2 digit number 
#include <stdio.h>
int main()
{
int num;
printf("enter number");
scanf("%d",&num);
if(num>9 && num<100)
{
    printf("it is 2 digit");

}
else
{
    printf("not a 2 digit");
}
return 0;
}