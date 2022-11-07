#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void LinkedListTraversal(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("\nThe data is : %d", ptr->data);
        ptr = ptr->next;
    }
}

struct node *InsertAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    head->prev = ptr;
    return ptr;
}

struct node *InsertAtLast(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->prev = p;
    ptr->next = NULL;
    return ptr;
}

struct node *InsertAtIndex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    struct node *q = head->next;

    for(int i = 0; i<index-1; i++)
    {
        p=p->next;
        q=q->next;
    }

    ptr->next = q;
    ptr->prev = p;
    p->next = ptr;
    q->prev = ptr;
    return ptr;
}

struct node *InsertAfterNode (struct node *head, int data, struct node* prevnode)
{
    struct node *ptr = (struct node*) malloc (sizeof(struct node));
    ptr->data = data;
    ptr->next = prevnode->next;
    prevnode->next->prev = ptr;
    prevnode->next = ptr;
    ptr->prev=prevnode;
}

int main()
{
    // int n;
    // printf("Enter no of nodes = ");
    // scanf("%d", &n);
    // struct node *head = (struct node *)malloc(sizeof(struct node));
    // printf("Enter the data of first node ");
    // scanf("%d", &head->data);
    // head->prev = NULL;
    // struct node *temp = head;

    // for (int i = 1; i < n; i++)
    // {
    //     struct node *newnode = (struct node *)malloc(sizeof(struct node));
    //     printf("enter the data");
    //     scanf("%d", &newnode->data);
    //     temp->next = newnode;
    //     newnode->prev = temp;
    //     temp = newnode;
    // }
    // temp->next = NULL;

    struct node* head = (struct node *) malloc(sizeof(struct node));
    struct node* second = (struct node *) malloc(sizeof(struct node));
    struct node* third = (struct node *) malloc(sizeof(struct node));
    struct node* fourth = (struct node *) malloc(sizeof(struct node));

    head->data = 61;
    head->next = second;
    head->prev = NULL;

    second->data = 88;
    second->next = third;
    second->prev=head;

    third->data = 16;
    third->next = fourth;
    third->prev=second;

    fourth->data = 84;
    fourth->next= NULL;
    fourth->prev=third;

    LinkedListTraversal(head);
    InsertAfterNode(head,55,second);
    LinkedListTraversal(head);
    return 0;
}