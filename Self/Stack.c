#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack *ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    return 0;
}

void push (struct stack *s, int val)
{
    if(isFull(s))
    {
        printf("Stack Overflow, cannot push %d into the stack", val);
    }
    else
    {
        s->top++;
        s->arr[s->top] = val;
        printf("\n%d pushed into the stack", val);
    }
}

int pop(struct stack *s)
{
    if(isEmpty(s))
    {
        printf("Stack Underflow, cannot pop from the stack");
    }
    else
    {
        int val = s->arr[s->top];
        s->top--;
        return val;
        printf("\n%d popped from the stack", val);
    }
}

int peek(struct stack *s,int i)
{
    if(isEmpty(s))
    {
        printf("Stack Underflow, no element to peek");
    }
    int index = s->top-i+1;
    if(index<0)
    {
        printf("Not a valid position");
        return -1;
    }
    else
    {
        return s->arr[index];
    }
}

int stackTop(struct stack *s)
{
    return s->arr[s->top];
}

int stackBottom(struct stack *s)
{
    return s->arr[0];
}

void display(struct stack *s)
{
    if(isEmpty(s))
    {
        printf("Stack is Empty");
    }
    else
    {
        for (int j = 0; j<=s->top; j++)
        {
            printf("\nThe value at position %d is %d", j, s->arr[j]);
        }
    }
}

int main()
{
    struct stack *s;
    s = (struct stack *) malloc(sizeof(struct stack));
    printf("Enter the size of stack : ");
    scanf("%d", &s->size);
    s->top = -1;
    s->arr = (int *)malloc(s->size*sizeof(int));
    push(s, 1);
    push(s, 23);
    push(s, 99);
    push(s, 75);
    push(s, 3);
    push(s, 64);
    push(s, 57);
    push(s, 46);
    push(s, 89);
    push(s, 6);  
    push(s, 5);  
    push(s, 75);

    int peeked = peek(s,10);
    printf("\nThe element you want to peek is : %d", peeked);
    display(s);
    return 0;
}