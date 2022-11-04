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
    printf("Enter the data of the node : ");
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
    head = InsertAtFirst(head);
    LinkedListTraversal(head);
}