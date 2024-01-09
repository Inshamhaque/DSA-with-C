// Circular Queue using Array 
#include<stdio.h>
#include<stdlib.h>
struct c_queue
{
    int* data;
    int size;
    int f; //front 
    int  r; //rear

};
int isempty(struct c_queue* ptr)
{
    if(ptr->f == ptr->r)
    {
        return 1;
    }
    return 0;
}
int isfull(struct c_queue* ptr)
{
    if((ptr->r+1)%ptr->size==ptr->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct c_queue* ptr, int element)
{
    if(isfull(ptr))
    {
        printf("Queue is full, cannot enqueue\n");
    }
    else
    {
        ptr->r = (ptr->r+1)%ptr->size;
        ptr->data[ptr->r] = element;
    }
}
int dequeue(struct c_queue* ptr)
{
    if(isempty(ptr))
    {
        printf("Queue is empty, cannot dequeue");
    }
    else
    {
        ptr->f = (ptr->f+1)%ptr->size;
        int element  = ptr->data[ptr->f];
        return element;
        
    }
}
void traversal(struct c_queue* ptr)
{
    if(isempty(ptr)!=1)
    {
            for(int i = ptr->f+1; i != (ptr->r+1);i = (i+1)%ptr->size)
            {
                printf("%d ", ptr->data[i]);
            }
    }
}   
int main()
{
    struct c_queue* q = malloc(sizeof(struct c_queue));
    q->f  = q->r = 0;
    q->size = 7;
    q->data = malloc(q->size*sizeof(int));
    if(isempty(q)){
        printf("Queue is empty\n");
    }
    if(isfull(q)){
        printf("Queue is full\n");
    }
    
    enqueue(q,10);
    enqueue(q,11);
    enqueue(q,12);
    enqueue(q,13);
    enqueue(q,14);
    enqueue(q,15);
    printf("dequeue element is :%d\n",dequeue(q));
    printf("dequeue element is :%d\n",dequeue(q));
    printf("dequeue element is :%d\n",dequeue(q));
    printf("dequeue element is :%d\n",dequeue(q));
    traversal(q);
    if(isempty(q)){
        printf("Queue is empty\n");
    }
    if(isfull(q)){
        printf("Queue is full\n");
    }


    return 0;
}