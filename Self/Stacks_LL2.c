#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

int isEmpty()
{
    if (top == NULL)
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
    if (n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int val)
{
    if (isFull())
    {
        printf("\nStack Overflow");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = val;
        n->next = top;
        top = n;
    }
}

void pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow");
    }
    else
    {
        struct node *n = top;
        top = top->next;
        free(n);
    }
}

int peek(int pos)
{
    struct node *ptr = top;
    for (int i = 0; (i < pos - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}

void display()
{
    if (isEmpty())
    {
        printf("Stack is Empty");
    }
    else
    {
        struct node *n = top;
        while (n != NULL)
        {
            printf("The element is : %d", n->data);
            n = n->next;
        }
    }
}

int main()
{
    int choice, value;
    while (1)
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Exit\nEnter Your Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value you want to push :");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            int p;
            printf("Enter the position at which you want to peek : ");
            scanf("%d", &p);
            int peeked = peek(p);
            printf("%d", peeked);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid Choice");
        }
    }
    return 0;
}