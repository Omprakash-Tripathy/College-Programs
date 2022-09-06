// WAP to search an element in a simple linked list, if found delete that node and insert that node at beginning.

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} * head;
void input(int n)
{
    struct Node *newnode, *temp;
    int data, i;
    head = (struct Node *)malloc(sizeof(struct Node));
    if (head == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }
    printf("Enter the data of node 1:");
    scanf("%d", &data);
    head->data = data;
    head->next = NULL;

    temp = head;
    for (i = 1; i < n; i++)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        if (newnode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }
        printf("Enter the data of node %d:", i + 1);
        scanf("%d", &data);
        newnode->data = data;
        newnode->next = NULL;
        temp->next = newnode;
        temp = temp->next;
    }
}
void traverse()
{
    struct Node *temp;
    if (head == NULL)
    {
        printf("List is empty.");
    }
    temp = head;
    while (temp != NULL)
    {
        printf("Value=%d\n", temp->data);
        temp = temp->next;
    }
}
int search()
{
    struct Node *temp;
    temp = head;
    int ab;
    printf("\n Enter the element to search:");
    int s, f;
    scanf("%d", &s);
    while (temp != NULL)
    {
        if (temp->data == s)
        {
            printf("Element is present.");
            ab = temp->data;
            f = 0;
            break;
        }
        else
        {
            f = 1;
        }
        temp = temp->next;
    }
    if (f == 1)
    {
        ab = 0;
    }
    return ab;
}

void deletek(int ab)
{
    struct Node *current = head, *previous;
    int k;
    k = ab;
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    if (current->data == k)
    {
        head = current->next;
        free(current);
    }
    while (current != NULL && current->data != k)
    {
        previous = current;
        current = current->next;
    }
    if (current == NULL)
    {
        printf("%d not found in Linked List\n", k);
        return;
    }
    previous->next = current->next;
    free(current);
}

int insertb(int ab)
{
    int d = ab;
    struct Node *temp;
    temp = malloc(sizeof(struct Node));
    temp->data = d;
    temp->next = head;
    head = temp;
}

int main()
{
    int n, j;
    printf("Enter how many nodes you want to enter:");
    scanf("%d", &n);
    input(n);
    traverse();
    j = search();
    if (j == 0)
    {
        printf("Element is not present.");
    }
    else
    {
        deletek(j);
        insertb(j);
        printf("\n");
        traverse();
    }

    return 0;
}