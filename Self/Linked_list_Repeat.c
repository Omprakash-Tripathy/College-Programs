#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("The element is : %d", ptr->data);
        ptr = ptr->next;
    }
}

struct node *InsertAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct node *InsertAtEnd(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = p->next;
    return head;
}

struct node *InsertAtIndex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr->next;
    return head;
}

struct node *InsertAfterNode(struct node *head, int data, struct node *prevnode)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prevnode->next;
    prevnode->next = ptr;
}

int main()
{
    // struct node* head = (struct node* ) malloc (sizeof(struct node));
    // struct node* second = (struct node* ) malloc (sizeof(struct node));
    // struct node* third = (struct node*) malloc (sizeof(struct node));
    // struct node* fourth = (struct node*) malloc (sizeof(struct node));

    // head->data = 69;
    // head->next = second;

    // second->data = 420;
    // second->next = third;

    // third->data = 96;
    // third->next = fourth;

    // fourth->data = 24;
    // fourth->next = NULL;

    // Function Call crow

    int n;
    printf("Enter no of nodes = ");
    scanf("%d", &n);
    struct node *head = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data of first node ");
    scanf("%d", &head->data);
    struct node *temp = head;

    for (int i = 1; i < n; i++)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d", &newnode->data);
        temp->next = newnode;
        temp = newnode;
    }
    temp->next = NULL;

    linkedListTraversal(head);

    return 0;
}