#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack 
{
    int size;
    int top;
    char* arr;
};

int isoperator(char ptr)
{
    if (ptr =='+' || ptr =='-' || ptr == '*' || ptr == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isempty(struct stack* ptr)
{
    return (ptr->top == -1);
}

int precedence(char ptr)
{
    if (ptr == '*' || ptr == '/')
    {
        return 3;
    }
    else if (ptr == '+' || ptr == '-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

void push(struct stack* ptr, char ch)
{
    ptr->top++;
    ptr->arr[ptr->top] = ch;
}

char pop(struct stack* ptr)
{
    char popped = ptr->arr[ptr->top];
    ptr->top--;
    return popped;
}

char* intopo(char* infix)
{
    struct stack* sp = malloc(sizeof(struct stack));
    sp->top = -1;
    sp->size = 100;
    sp->arr = (char*)malloc(sp->size * sizeof(char));

    char* postfix = malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0, j = 0;

    while (infix[i] != '\0')
    {
        if (!isoperator(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(sp->arr[sp->top]))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                while (!isempty(sp) && precedence(infix[i]) <= precedence(sp->arr[sp->top]))
                {
                    postfix[j] = pop(sp);
                    j++;
                }
                push(sp, infix[i]);
                i++;
            }
        }
    }

    while (!isempty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }

    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char* infix = "x-y/z-k*d";
    printf("postfix is %s", intopo(infix));
    return 0;
}