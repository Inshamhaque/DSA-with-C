// ALL QUEUE OPERATIONS 
/* IT appears LIke this in a more vivid and simple way in the form of an ARRAy 
              index->   -1     0      1      2     3     4     5     6      7 
(while enq)elements-> ptr->f   12     13     14    15    16
                                                        ptr->b
(while deq)elements->                        14    15    16
                                    ptr->f              ptr->b
*/
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
    return ptr->f;

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
    q->size = 5;
    q->arr = (int*)malloc(q->size * sizeof(int));
    // enqueuing --> only increment of q->b(back pointer)
    q->b = enqueue(q, 12);
    q->b = enqueue(q, 13);
    q->b = enqueue(q, 14);
    q->b = enqueue(q, 15);
    q->b = enqueue(q, 16);
    printf("%d\n", q->b);
    // traversing
    traversal(q);
    printf("\n");
    // dequeuing--> only increment q->f(front pointer)
    q->f=dequeue(q);
    q->f=dequeue(q);
    printf("q->f: %d ,q->b:%d\n",q->f,q->b);
    // traversing
    traversal(q);
    free(q->arr);
    free(q);
    return 0;
}