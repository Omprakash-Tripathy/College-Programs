#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *s, char val)
{
    if (isFull(s))
    {
        printf("\nStack Overflow, cannot push %c into the stack", val);
    }
    else
    {
        s->top++;
        s->arr[s->top] = val;
        printf("\nSuccessfully pushed %c into the stack", val);
    }
}

char pop(struct stack *s)
{
    if (isEmpty(s))
    {
        printf("\nStack Underflow, cannot pop from the stack");
        return -1;
    }
    else
    {
        char val = s->arr[s->top];
        s->top--;
        return val;
        printf("\n%c popped from the stack", val);
    }
}

int parenthesisMatch(char *exp)
{
    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 100;
    s->top = -1;
    s->arr = (char*)malloc(s->size*sizeof(char));
    // printf("Enter your expression :");
    // scanf("%s", &exp);
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(s, '(');
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(s))
            {
                return 0;
            }
            pop(s);
        }
    }
    if (isEmpty(s))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char *exp = "((8)(*--9))";
    // Check if stack is empty
    if (parenthesisMatch(exp))
    {
        printf("\nThe parenthesis is matching");
    }
    else
    {
        printf("\nThe parenthesis is not matching");
    }
    return 0;
}