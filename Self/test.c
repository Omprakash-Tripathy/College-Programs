// Write the code to reverse only prime positions elements in a single linked list. Assuming the starting position is 1.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        struct node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void display()
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int isPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void reverse()
{
    struct node *temp = head;
    int i=1;
    while(temp != NULL)
    {
        if(isPrime(i))
        {
            struct node *temp1 = temp;
            while(temp1->next != NULL)
            {
                temp1 = temp1->next;
            }
            int temp2 = temp->data;
            temp->data = temp1->data;
            temp1->data = temp2;
        }
        temp = temp->next;
        i++;
    }
}

int main()
{
    int n,i,data;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    printf("Enter the data : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&data);
        insert(data);
    }
    reverse();
    display();
    return 0;
}