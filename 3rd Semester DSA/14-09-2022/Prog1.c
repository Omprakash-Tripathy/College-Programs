// Suppose a single linked list contains non-negative integers in random order.
// Write a program in C to rearrange the nodes such that all odd numbers precede the even numbers.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void create(int n)
{
    struct node *newnode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Not able to allocate memory.");
    }
    else
    {
        printf("Input node 1 data: ");
        scanf("%d", &data);
        head->data = data;
        head->next = NULL;
        temp = head;
        for (i = 2; i <= n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            if (newnode == NULL)
            {
                printf("Not able to allocate memory.");
                break;
            }
            else
            {
                printf("Input node %d data: ", i);
                scanf("%d", &data);
                newnode->data = data;
                newnode->next = NULL;
                temp->next = newnode;
                temp = temp->next;
            }
        }
    }
}

void display()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

void rearrange()
{
    struct node *temp, *odd, *even, *oddhead, *evenhead;
    temp = head;
    odd = even = oddhead = evenhead = NULL;
    while (temp != NULL)
    {
        if (temp->data % 2 == 0)
        {
            if (even == NULL)
            {
                even = temp;
                evenhead = even;
            }
            else
            {
                even->next = temp;
                even = even->next;
            }
        }
        else
        {
            if (odd == NULL)
            {
                odd = temp;
                oddhead = odd;
            }
            else
            {
                odd->next = temp;
                odd = odd->next;
            }
        }
        temp = temp->next;
    }
    if (oddhead == NULL)
    {
        head = evenhead;
    }
    else
    {
        head = oddhead;
        odd->next = evenhead;
    }
    if (even != NULL)
    {
        even->next = NULL;
    }
}

int main()
{
    int n;
    printf("Input the number of nodes: ");
    scanf("%d", &n);
    create(n);
    printf("Unarranged List: ");
    display();
    rearrange();
    printf("Rearranged List: ");
    display();
    return 0;
}