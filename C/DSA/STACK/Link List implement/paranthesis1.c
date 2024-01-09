#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// main structure defn
struct stack {
    int top;
    int size;
    char* arr;
};
// pushing function without any return value
void push(struct stack* ptr, char value)
{
    ptr->arr[++ptr->top] = value;
}
//popping function without any return value
void pop(struct stack* ptr)
{
    ptr->top--;
}
// to check whether stack is empty or not
int isempty(struct stack* ptr)
{
    if (ptr->top == -1) {
        return 1;
    } else {
        return 0;
    }
}
// main function for checking
int paranthesisMatch(char* exp)
{
    struct stack* sp = (struct stack*)malloc(sizeof(struct stack));
    sp->top = -1;
    sp->size = strlen(exp);
    sp->arr = (char*)malloc(sp->size * sizeof(char));

    int cf = 0, cl = 0;
    //traversing and checking whether each char is equal to '(' then pushing and if ')' then poping out 
    // if '(' is already present before ')' 
    for (int i = 0; i < strlen(exp); i++) {
        if (exp[i] == '(') {
            push(sp, exp[i]);
            cf++;
        } else if (exp[i] == ')') {
            cl++;
            if (cl > cf) {
                continue;
            } else {
                pop(sp);
            }
        } else 
        {
            continue;
        }
    }
    //checking matched, unmatched & underflow condition
    if (isempty(sp) == 1 && cf>=cl) {
        printf("Parenthesis matched");
        result = 1;
    } 
    else if (cl>cf)
    {
        printf("underflow and hence unmatched");
    }
    else 
    {
        printf("Not matched");
        result = 0;
    }

    free(sp->arr);
    free(sp);
    return result;
}

int main()
{
    char str[] = "(098)(";
    paranthesisMatch(str);
    return 0;
}

