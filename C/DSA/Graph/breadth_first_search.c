//Breadth FIrst traversal in Graph uses the implementation of queue and comprises of a Exploration queue and Visiting array 
//A node is said to be explored only if all of its connection are visited i.e are member of visiting array!!!
#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int b;
    int* arr;
};
int isfull(struct queue* ptr)
{
    if(ptr->b == ptr->size - 1)
    {
        return 1; 
    }
    return 0;
}
int isempty(struct queue* ptr)
{
    if(ptr->f == ptr->b)
    {
        return 1;
    }
    return 0;
}
int enqueue(struct queue* ptr, int val)
{
    if (isfull(ptr))
    {
        printf("Queue is full. Cannot enqueue element %d \n",val
        );
        return ptr->b;
    }

    ptr->b++;
    ptr->arr[ptr->b] = val;
    return ptr->b;
}
int dequeue(struct queue* ptr)
{
    ptr->f++;
    return ptr->arr[ptr->f];

}
void traversal(struct queue* ptr)
{
    if (isempty(ptr))
    {
        printf("Queue is empty. No elements to display.\n");
        return;
    }

    for (int i = ptr->f + 1; i <= ptr->b; i++)
    {   
        printf("The queue element at index %d is: %d\n", i, ptr->arr[i]);
    }
}
int main()
{
    struct queue* q = malloc(sizeof(struct queue));
    q->f = -1;
    q->b = -1;
    q->size = 400;
    q->arr = (int*)malloc(sizeof(int)*q->size);
    //BFS implementation 
    int node;
    int start_node = 5 ;  //Starting node 
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
    printf("%d ",start_node);
    visited[start_node] = 1;
    enqueue(q,start_node);
    while(!isempty(q))
    {
        int node = dequeue(q);
        for(int j=0;j<7;j++)
        {
            if(graph[node][j] == 1 && visited[j] == 0)//node is connected and that node is not already visited 
            {
                visited[j] = 1; // marking in the visited list 
                printf("%d ",j);
                enqueue(q,j);//enqueuing in the exploring queue
            }
        }
    }
    return 0;
    
    
}