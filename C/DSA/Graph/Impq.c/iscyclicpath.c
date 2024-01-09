#include<stdio.h>
#include<stdlib.h>
int main()
{
    int graph[4][4] = {
        {0,1,1,0},
        {0,0,1,0},
        {0,0,0,1},
        {1,1,0,0}
    };
    for(int i=0;i<4;i++)
    {
        int start_index = i;
        printf("%d",i);
        for(int j=0;j<4;j++)
        {
            if(graph[i][j]==1)
            {
                i=j;
                j=0;
                printf("->%d",i);
            }
            
            
        }
    }
    return 0;
}