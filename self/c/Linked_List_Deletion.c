#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void LinkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("The element is : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *DeleteAtFirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct node *DeleteAtLast(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}

struct node *DeleteAtIndex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;

    for (int i = 0; i < index; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}

struct node *DeleteByValue(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = head->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }

    return head;
}

int main()
{
    int n;
    printf("Enter number of nodes : ");
    scanf("%d", &n);
    struct node *head = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &head->data);
    struct node *temp = head;
    for (int i = 1; i < n; i++)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data of newnode : ");
        scanf("%d", &newnode->data);
        temp->next = newnode;
        temp = newnode;
    }

    temp->next = NULL;

    LinkedListTraversal(head);
    return 0;
}