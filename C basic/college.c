#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    int N;
	    scanf("%d",&N);
	    int arr[N];
	    //creating a basic std::array<T, N> ;
	    for(int i=0;i<N;i++)
	    {
	        arr[i] = i+1;
	    }
	    //creating array of sum 
	    int sum[N/2];
	    for(int i=0;i<N/2;i++)
	    {
	        sum[i] = arr[i]+arr[N-1-i];
	    }
	    //comparing each element
	    for(int i=0;i<N/2;i++)
	    {
	        if(sum[i]==sum[i+1])
	        {
	            int n;
	            arr[i] = n;
	            arr[i] = arr[i+1];
	            arr[i+1] = n;
	        }
	        
	       
	    }
	    //printing array
	    for(int i=0;i<N;i++)
	    {
	        printf("%d ",arr[i]);
	    }
	    printf("\n");
	}
	return 0;
}