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
int range(struct stack* ptr)
{
    struct stack* p = ptr;
    int in=0;
    while(p!=NULL)
    {
        in++;
        p = p->next;
    }
    return in;
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
void peek(struct stack* ptr, int pos)
{
    struct stack* p =   ptr;
    int a = range(ptr);
    if(pos>a)
    {
        printf("%d",a);
        printf("Index out of range");
    }
    else
    {
        for(int i=1;i<=pos;i++)
        {
            if(i==pos)
            {
                printf("the element at %d index is %d\n",i,p->data);
            }
            else
            {
                p = p->next;
            }

        }
    }
    
}
int stacktTop(struct stack* ptr)
{
    return ptr->data;
}
int stackbottom(struct stack* ptr)
{
    struct stack* p = ptr;
    while(p!=NULL)
    {
        p = p->next;
    }
    return p->data;
}
int main()
{
    struct stack* top  = malloc(sizeof(struct stack));
    top->data = 89;
    top->next = NULL;
    isempty(top);
    top = Push(top,12);
    top = Push(top,13);
    top = Push(top,14);
    top = Push(top,15);
    top = Push(top,16);
    traversal(top);
    peek(top,6);
    int a = stacktTop(top);
    printf("stack top is %d\n",a);
    int b = stackbottom(top);
    printf("stack botom is %d",b); 
}