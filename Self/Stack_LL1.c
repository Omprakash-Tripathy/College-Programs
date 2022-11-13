//implement stack operations using linked list in c
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

int isEmpty()
{
    if(top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if(n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int x)
{
    if(isFull())
    {
        printf("Stack Overflow");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = x;
        n->next = top;
        top = n;
    }
}

void pop()
{
    struct node *temp;
    if(isEmpty())
    {
        printf("Stack Underflow");
    }
    else
    {
        temp = top;
        top = top->next;
        temp->next = NULL;
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
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    int choice, value;
    while(1)
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter the value to be inserted: ");
                    scanf("%d",&value);
                    push(value);
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
                    break;
            default: printf("Invalid choice");
        }
    }
    return 0;
}