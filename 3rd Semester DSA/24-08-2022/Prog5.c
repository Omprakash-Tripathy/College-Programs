//WAP to count the number of occurrences of an element in a linked list of n nodes.

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*head;
void input(int n)
{
    struct Node *newnode,*temp;
    int data,i;
    head=(struct Node *)malloc(sizeof(struct Node));
    if(head==NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }
    printf("Enter the data of node 1:");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;

    temp=head;
    for(i=1;i<n;i++)
    {
        newnode=(struct Node *)malloc(sizeof(struct Node));
        if(newnode==NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }
        printf("Enter the data of node %d:",i+1);
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
    }
}
void traverse()
{
    struct Node *temp;
    if(head==NULL)
    {
        printf("List is empty.");
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("Value=%d\n",temp->data);
        temp=temp->next;
    }
}

void search()
{
    struct Node *temp;
    temp=head;
    printf("\n Enter the element to search and find the numbr of occurance:");
    int s;
    int p=0;
    scanf("%d",&s);
    while(temp!=NULL)
    {
        if(temp->data==s)
        {
            p=p+1;
        }
        temp=temp->next;
    }
    printf("The number of occurance of %d is %d.",s,p);
}

int main()
{
    int n,j;
    printf("Enter how many nodes you want to enter:");
    scanf("%d",&n);
    input(n);
    traverse();
    search();
}