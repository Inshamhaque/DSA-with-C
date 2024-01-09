#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int top;
    int size;
    char* arr;
};

int isoperator(char exp)
{
    if (exp == '+' || exp == '-' || exp == '/' || exp == '*')
    {
        return 1;
    }
    return 0;
}

int precedence(char exp)
{
    if (exp == '+' || exp == '-')
    {
        return 2;
    }
    else if (exp == '/' || exp == '*')
    {
        return 3;
    }
    else
    {
        return 0;
    }
}

void push(struct stack* ptr, char exp)
{   
    ptr->top++;
    ptr->arr[ptr->top] = exp;
}

int isempty(struct stack* ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

char* intopo(char* infix)
{
    struct stack* sp = malloc(sizeof(struct stack));
    sp->size = strlen(infix);
    sp->top = -1;
    sp->arr = malloc(sp->size * sizeof(char));
    char* postfix = malloc((sp->size + 1) * sizeof(char));
    int i = 0;
    int j = 0;

    while (i < sp->size)
    {
        if (!isoperator(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (isempty(sp) || precedence(infix[i]) > precedence(sp->arr[sp->top]))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                while (!isempty(sp) && precedence(infix[i]) <= precedence(sp->arr[sp->top]))
                {
                    postfix[j] = sp->arr[sp->top];
                    j++;
                    sp->top--;
                }
                push(sp, infix[i]);
                i++;
            }
        }
    }

    while (!isempty(sp))
    {
        postfix[j] = sp->arr[sp->top];
        j++;
        sp->top--;
    }

    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char* infix = "a+b";
    printf("postfix exp is: %s\n", intopo(infix));

    return 0;
}
