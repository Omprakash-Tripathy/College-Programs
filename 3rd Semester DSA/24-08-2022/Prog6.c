//WAP to remove duplicates from a linked list of n nodes.

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

void removeDuplicates() 
{ 
    struct Node *ptr1, *ptr2, *dup; 
    ptr1 = head; 
    while (ptr1 != NULL && ptr1->next != NULL) 
    { 
        ptr2 = ptr1; 
        while (ptr2->next != NULL) 
        { 
            if (ptr1->data == ptr2->next->data) 
            { 
                dup = ptr2->next; 
                ptr2->next = ptr2->next->next; 
                free(dup); 
            } 
            else{
                ptr2 = ptr2->next; 
            }
            
        } 
        ptr1 = ptr1->next; 
    } 
} 

int main()
{
    int n;
    printf("Enter how many nodes you want to enter:");
    scanf("%d",&n);
    input(n);
    traverse();
    removeDuplicates();
    printf("The Linked List after Removing the duplicates are:\n");
    traverse();
}