#include<stdio.h>
#include<stdlib.h>
// to find stack bottom and stack top xD 
struct stack
{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct stack *ptr)
{
    if(ptr->top==((ptr->size)-1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, int val)
{
    if(isfull(ptr))
    {
        printf("stack overflow: %d cannot be inserted\n",val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int stacktop(struct stack* sp)
{
    return sp->arr[sp->top];
}
int stackbottom(struct stack* sp)
{
    return sp->arr[sp->size-sp->top-1];
}
int main()
{
    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
    s->size = 10;
    s->top  = -1;
    s->arr  = (int*)malloc(s->size*sizeof(int));
    printf("after pushing, Full: %d\n", isfull(s));
    printf("after pushing, empty: %d\n", isempty(s));
    push(s,41);
    push(s,42);
    push(s,43);
    push(s,44);
    push(s,45);
    push(s,46);
    push(s,47);
    push(s,48);
    push(s,49);
    push(s,50); // --> pushed 10 vlaues
    printf("%d\n",s->size);
    printf("top is: %d\n",s->top);
    printf("Stack top is %d\n", stacktop(s));   
    printf("Stack bottom is %d", stackbottom(s));   

}