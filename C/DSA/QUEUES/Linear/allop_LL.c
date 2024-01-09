#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int data;
    struct queue* next;
};
int isempty(struct queue*ptr1,struct queue* ptr2 )
{
    if(ptr1 == NULL && ptr2==NULL)
    {
        return 1;
    }
}
void enqueue(struct queue**ptr1, struct queue** ptr2, int val)
{
    struct queue* ptr = malloc(sizeof(struct queue));
    ptr->data = val;
    ptr->next=NULL;
    if(isempty(*ptr1,*ptr2))
    {
        *ptr1 = ptr;
        *ptr2 = ptr;
    }
    else
    {
        (*ptr2)->next = ptr;
        *ptr2 = ptr;
    }
}
int main()
{
    struct queue* b =NULL;
    struct queue* f = NULL;    
    enqueue(&f,&b,10);
    enqueue(&f,&b,11);
    enqueue(&f,&b,12);
    enqueue(&f,&b,14);
    // traversal
    struct queue* ptr = f;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    
}