#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int T;
        scanf("%d",&T);
        int flag =1;
        int count =0;
        while(flag==1)
        {
            int a;
            a = T%10;
            T = T/10;
            if(T!=0)
            {
                flag = 1;
                if(a==4)
                {
                    count +=1;
                }
                else
                {
                    continue;
                }
            }
            else if (T==0)
            {
                flag = 0;
                if(a==4)
                {
                    count +=1;
                }
                else
                {
                    continue;
                }
            }
        }
        printf("%d\n",count);
            
            
            
    }
    return 0;
        
        
}

    
