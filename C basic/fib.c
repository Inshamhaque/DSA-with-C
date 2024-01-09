#include<stdio.h>
int f(int x);
int main()
{
    int n,fib;
printf("enter number");
scanf("%d",&n);
for(int i=0;i<=n;i++)
fib=f(i);
printf("%d",fib);
return 0;
}
int f(int x);
{
int s;
if (x==0)
{

    return(0);

}
elseif(x==1)
{
return(1);
}
else
{
s=f(x-2)+f(x-1);
return(s);
}
}










}