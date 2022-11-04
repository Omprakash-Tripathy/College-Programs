#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void LinkedListTraversal(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("\nThe data is : %d", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct node *InsertAtFirst(struct node *head)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data of the node to insert at first : ");
    scanf("%d", &ptr->data);

    struct node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    return ptr;
}

struct node *InsertAtLast(struct node *head)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data of the node to insert at last : ");
    scanf("%d", &ptr->data);

    struct node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    return ptr;
}

struct node *InsertAtIndex(struct node *head)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data of the node to insert at index : ");
    scanf("%d", &ptr->data);

    int index;
    printf("\nEnter the index at which you want to insert node : ");
    scanf("%d", &index);

    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    ptr->next = q;
    p->next = ptr;
    return ptr;
}

struct node *InsertAfterKey(struct node *head)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data of the node to insert at index : ");
    scanf("%d", &ptr->data);

    int key;
    printf("\nEnter the key at which you want to insert node : ");
    scanf("%d", &key);

    struct node *p = head;
    struct node *q = head->next;

    while(p->data != key)
    {
        p=p->next;
        q=q->next;
    }

    ptr->next = q;
    p->next = ptr;
    return ptr;
}

struct node *InsertAfterNode(struct node *head, int data, struct node *prevNode)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 41;
    head->next = second;

    second->data = 51;
    second->next = third;

    third->data = 61;
    third->next = fourth;

    fourth->data = 71;
    fourth->next = head;

    LinkedListTraversal(head);
    // head = InsertAtFirst(head);
    // LinkedListTraversal(head);
    // InsertAtLast(head);
    // LinkedListTraversal(head);
    // InsertAtIndex(head);
    // LinkedListTraversal(head);
    InsertAfterKey(head);
    LinkedListTraversal(head);
}