#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    int N,M,K;
	    scanf("%d %d %d",N,M,K);
	    int r = M-K;
	    if(N>=r)
	    {
	        printf("no");
	    }
	    else
	    {
	        printf("yes");
	    }
	}
	return 0;
}