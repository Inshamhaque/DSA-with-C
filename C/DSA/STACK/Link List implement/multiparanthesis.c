#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    char data;
    struct stack *next;
};

struct stack *push(struct stack *ptr, char value)
{
    struct stack *sp = malloc(sizeof(struct stack));
    sp->next = ptr;
    sp->data = value;
    ptr = sp; 
    return ptr;
}

struct stack *pop(struct stack *ptr)
{
    struct stack *sp = ptr;
    ptr = ptr->next;
    free(sp);
    return ptr;
}

int isempty(struct stack *ptr)
{
    if (ptr == NULL)
    {
        return 1;
    }
    return 0;
}

void traversal(struct stack *ptr)
{
    while (ptr != NULL)
    {
        printf("%c\n", ptr->data);
        ptr = ptr->next;
    }
}

void m_par(char *exp)
{
    struct stack *top = NULL;
    int flag = 0;

    for (int i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
        {
            top = push(top, exp[i]);
        }
        else if (exp[i] == '}' || exp[i] == ')' || exp[i] == ']')
        {
            if (isempty(top))
            {
                printf("Parentheses not matched\n");
                return;
            }

            char expected;
            if (exp[i] == '}')
            {
                expected = '{';
            }
            else if (exp[i] == ')')
            {
                expected = '(';
            }
            else if (exp[i] == ']')
            {
                expected = '[';
            }

            if (top->data == expected)
            {
                top = pop(top);
                flag = 1;
            }
            else
            {
                printf("Parentheses not matched\n");
                return;
            }
        }
    }

    if (flag == 1)
    {
        if (isempty(top))
        {
            printf("Parentheses matched\n");
        }
        else
        {
            printf("Unmatched parentheses\n");
        }
        traversal(top);
    }
}

int main()
{
    char str[] = "[{(12334545()60988)}]";
    m_par(str);

    return 0;
}
