#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    int N;//number of posts
	    scanf("%d",&N);
	    int A[N];//likes
	    for(int j=0;j<N;j++)
	    {
	        scanf("%d",&A[j]);
	    }
	    int B[N];//comments
	    for(int x = 0;x<N;x++)
	    {
	        scanf("%d",&B[x]);
	    }
	    //checking 
	    int num = A[0];
	    int max;
	    int r;
	    for(int a = 0;a<N;a++)
	    {
	        if (A[a]>num)
	        {
	            num = A[a];
	            r = a+1;
	            max = a;
	        }
	        else if(A[a]==num)
	        {
	           
	            if(B[a]>B[max])
	            {
	                num = A[a];
	                r = a+1;
	            }
	            else
	            {
	                r  = a+1;
	            }
	        }
	        else
	        {
	            r = a+1;
	            
	        }
	    }
	    printf("%d\n",r);
	    
	}
	return 0;
}