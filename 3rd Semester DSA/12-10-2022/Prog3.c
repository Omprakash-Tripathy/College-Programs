//WAP to convert an infix expression into its equivalent postfix notation

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct node
{
    char data;
    struct node *next;
};

struct node *top = NULL;

void isEmpty()
{
    if(top == NULL)
        printf("Stack is empty");
    else
        printf("Stack is not empty");
}

void push(char x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}

void pop()
{
    struct node *temp;
    if(top == NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        temp = top;
        top = top->next;
        free(temp);
    }
}

void display()
{
    struct node *temp;
    if(top == NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        temp = top;
        while(temp != NULL)
        {
            printf("%c ",temp->data);
            temp = temp->next;
        }
    }
}

int precedence(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    if(x == '^')
        return 3;
}

int main()
{
    char infix[20], postfix[20];
    int i = 0, j = 0;
    printf("Enter the infix expression: ");
    scanf("%s", infix);
    while(infix[i] != '\0')
    {
        if(isalnum(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else if(infix[i] == '(')
        {
            push(infix[i]);
            i++;
        }
        else if(infix[i] == ')')
        {
            while(top->data != '(')
            {
                postfix[j] = top->data;
                j++;
                pop();
            }
            pop();
            i++;
        }
        else
        {
            if(precedence(infix[i]) > precedence(top->data))
            {
                push(infix[i]);
                i++;
            }
            else
            {
                postfix[j] = top->data;
                j++;
                pop();
            }
        }
    }
    while(top != NULL)
    {
        postfix[j] = top->data;
        j++;
        pop();
    }
    postfix[j] = '\0';
    printf("The postfix expression is: %s", postfix);
    return 0;
}