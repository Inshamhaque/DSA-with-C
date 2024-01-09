// Circular queue using LL
#include<stdio.h>
#include<stdlib.h>
struct c_queue 
{
    int data;
    struct c_queue* next;
};
int isempty(struct c_queue* f, struct c_queue* r)
{
    if(f == NULL)
    {
        return 1;
    }
    return 0;
}
int isfull(struct c_queue* f, struct c_queue* r)
{
    struct c_queue* n = malloc(sizeof(struct c_queue));
    if(n==NULL)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct c_queue* f, struct c_queue *r, int element)
{
    if(isfull(f,r))
    {
        printf("Queue overflow\n");
    }    
    else
    {
        struct c_queue* n = malloc(sizeof(struct c_queue));
        n->data = element;
        n->next = NULL;
        if(f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}
// int dequeue()
void traversal(struct c_queue* f, struct c_queue* r)
{
    struct c_queue* tmp = f;
    while (tmp!= NULL)
    {
        printf("%d ", tmp -> data);
        tmp=tmp-> next;
    }
        
}

int main()
{
    struct c_queue* f =NULL;
    struct c_queue* r =NULL;
    enqueue(f,r,10) ;
    enqueue(f,r,11);
    enqueue(f,r,12);
    enqueue(f,r,13);
    enqueue(f,r,14);
    traversal(f,r); 
}