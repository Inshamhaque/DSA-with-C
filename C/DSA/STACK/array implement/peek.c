#include<stdio.h>
#include<stdlib.h>
// to push an element in a stack
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
int peek(struct stack* sp, int pos)
{
    if(pos>sp->top+1)
    {
        printf("invalid input index");
    }
    else
    {
        return sp->arr[sp->top-pos+1];

    }
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
    printf("top is: %d\n",s->top);
    for(int i=1;i<= s->top+1;i++)
    {
        printf("value at position %d: %d\n",s->top-i +1,peek(s,i)); 
    }

}