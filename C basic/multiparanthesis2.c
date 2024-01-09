#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
    int size;
    int top;
    char* arr;
};
void push(struct stack* ptr, char val)
{
    ptr->top++;
    ptr->arr[ptr->top] = val;
}
int isempty(struct stack* ptr)
{
    if(ptr->top == -1)
    {
        return 0;
    }
}
void pop(struct stack* ptr)
{
    ptr->top--;
}
void m_par(char *exp )
{
    struct stack* sp = malloc(sizeof(struct stack*));
    int flag ;
    sp->size = strlen(exp);
    sp->top=-1;
    sp->arr = (char*)malloc(strlen(exp)*sizeof(char));
    for(int i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='('||exp[i]=='['||exp[i]=='{')
        {
            push(sp,exp[i]);
        }
        else if( exp[i]==')'||exp[i]==']'||exp[i]=='}' )
        {
            if(isempty(sp)==0)
            {
                printf("hey paranthesis not matched");
                return;
            }
            char expected;
            if(exp[i]=='}')
            {
                expected = '{';
            }
            else if(exp[i]==')')
            {
                expected = '(';
            }
            else if(exp[i]==']')
            {
                expected = '[';
            }
            if(sp->arr[sp->top]==expected)
            {
                pop(sp);
                flag =1;
            }
            else
            {
                printf("paranthesis unmatched");
                
            }
        }
    }
    if(flag ==1) 
    {
        printf("Paranthesis matched ;->");
    }
}
int main()
{
    char exp[] = "{(124niiid)}";
    m_par(exp);
    return 0;
}