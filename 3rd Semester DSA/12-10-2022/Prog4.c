//WAP to reverse a stack with using extra stack.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
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

void push(int x)
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

void reverse()
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
            printf("The stack is %d \n",temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    int choice, x;
    while(1)
    {
        printf(" 1. Push\n 2. Pop\n 3. Reverse\n 4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter the element to be pushed: ");
                    scanf("%d",&x);
                    push(x);
                    break;
            case 2: pop();
                    break;
            case 3: reverse();
                    break;
            case 4: exit(0);
            default: printf("Invalid choice");
        }
    }
    return 0;
}