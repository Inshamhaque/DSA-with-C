#include<stdio.h>
#include<stdlib.h>
 
int main()
{
	int *ptr;
	ptr = (int*)calloc(15,sizeof(float));
	ptr = (int*)calloc(15,sizeof(float));
	for(int i=1;i<=10;i++)
	{
		ptr[i] = i*7;
	}
	for(int i=0;i<15;i++)
	{
		printf("%d*7 = %d\n",i,ptr[i]);
	}
	// ptr = realloc(ptr,15*sizeof(int));
	for(int i=1;i<=15;i++)
	{
		ptr[i] = i*7;
		printf("%d*7=%d\n",i,ptr[i]);
	}
}
