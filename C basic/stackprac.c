// using array as an ADT
#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int size;
    int *arr;
    
};
int isempty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return 0;
    }
}
int isfull(struct stack * ptr)
{
    if(ptr->top==(ptr->size-1))
    {
        return 1;
    }
}
void push(struct stack* ptr, int inp)
{
    int a = isfull(ptr);
    if(a==1)
    {
        printf("Stack is full\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=inp;
    }
}
void show(struct stack* ptr)
{
    for(int i=0;i<=ptr->top;i++)
    {
        printf("%d\n",ptr->arr[i]);

    }
}
void pop(struct stack* ptr)
{
    printf("The popped element is : %d\n",ptr->arr[ptr->top]);
    ptr->top--;
}
int main()
{
    struct stack* s;
    s->size = 5;
    s->top = -1;
    s->arr = (int*)malloc(s->size*sizeof(int));
    int a = isempty(s);
    int b = isfull (s);
    if(a==0)
    {
        printf("stack is empty\n");
    }
    if(b==1)
    {
        printf("stack is full\n");
    }
    push(s,41);
    push(s,42);
    push(s,43);
    push(s,44);
    push(s,45);
    push(s,46);
    show(s);
    pop(s);
    show(s);




     
    return 0;
}