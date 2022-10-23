#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d \n", ptr->data);
        ptr=ptr->next;
    }
}

struct node* InsertAtFirst(struct node* head, int data)
{
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct node* InsertAtEnd(struct node* head, int data)
{
    struct node* ptr = (struct node*) malloc(sizeof(struct node));
    struct node* p = head;
    
    while(p->next != NULL)
    {
        p=p->next;
    }

    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct node* InsertAtIndex(struct node* head, int data, int index)
{
    struct node* ptr = (struct node* ) malloc(sizeof(struct node));
    struct node* p = head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct node* InsertAfterIndex(struct node* head, int data, struct node* prevNode)
{
    
}

int main()
{
    struct node* head = (struct node *) malloc(sizeof(struct node));
    struct node* second = (struct node *) malloc(sizeof(struct node));
    struct node* third = (struct node *) malloc(sizeof(struct node));
    struct node* fourth = (struct node *) malloc(sizeof(struct node));

    head->data = 61;
    head->next = second;

    second->data = 88;
    second->next = third;

    third->data = 16;
    third->next = fourth;

    fourth->data = 88;
    fourth->next= NULL;

    linkedListTraversal(head);
    return 0;
}