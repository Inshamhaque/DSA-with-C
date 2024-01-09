// using LL as an ADT
#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int data;
    struct stack* next;
};
int isempty(struct stack* ptr)
{
    if(ptr->next==NULL)
    {
        return 1;
    }
}
int isfull(struct stack* ptr)
{
    struct stack* s = (struct stack*)malloc(sizeof(struct stack));
    if(s==NULL)
    {
        return 1;
    }
}
void traversal(struct stack* ptr)
{
    struct stack* n  = ptr;
    while(n!=NULL)
    {
        printf("%d\n",n->data);
        n = n->next;
    }
}
struct stack* Push(struct stack* ptr, int value)
{
    int a = isfull(ptr);
    if(a==1)
    {
        printf("stack overflow");
    }
    else
    {
        struct stack* p = (struct stack*)malloc(sizeof(struct stack));
        p->data = value;
        p->next = ptr;
        ptr = p;
        return ptr;
    
    }
}
struct stack* pop(struct stack* ptr )
{
    printf("Popped element is : %d\n",ptr->data);
    struct stack* x = ptr;
    ptr = ptr->next;
    return ptr;
    free(x);
}
int main()
{
    struct stack* top  = (struct stack*)malloc(sizeof(struct stack));
    top->data = 89;
    top->next = NULL;
    isempty(top);
    top = Push(top,12);
    top = Push(top,13);
    top = Push(top,14);
    top = Push(top,15);
    top = Push(top,16);
    traversal(top);
    top = pop(top);
    top = pop(top);
    top = pop(top);
    traversal(top);
}