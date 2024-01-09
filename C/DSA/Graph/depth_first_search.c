//This program has actually used that the nodes act as the index only in the visited array 
//The node is not considered if it's already visited. This means we can have multiple edges between two vertices.
//and not as a linked list. The time complexity is O(n) and space complexity is also O(1).
//Moreover, the function uses the default stack of the function using recursion instead of creating another Stack 
#include<stdio.h>
#include<stdlib.h>
//Graph initialization
int visited[7] = {0,0,0,0,0,0,0}; //Graph -> 0,1,2,3,4,5,6
int graph[7][7]= {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0},
    };
void DFS(int i)//i-> node on which we are present 
{
    printf("%d ",i);
    visited[i] = 1;
    for(int j=0;j<7;j++)
    {
        if(graph[i][j]==1 && visited[j]==0)
        {
            DFS(j);
        }
    }

}
int main()
{
    //DFS implementation
    DFS(5);

    
    return 0;
}