// 1. Write a menu driven program to perform the following operations in a single linked list by using suitable user defined
// functions for each case.
// a) Traversal of the list
// b) Check if the list is empty
// c) Insert a node at the certain position (at beginning/end/any position)
// d) Delete a node at the certain position (at beginning/end/any position)
// e) Delete a node for the given key
// f) Count the total number of nodes
// g) Search for an element in the linked list
// Verify &amp; validate each function from main method.

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} * head;

void input(int n);
void traverse();
void empty();
void insertb();
void inserte();
void insertp();
void deleteb();
void deletee();
void deletep();
void deletek();
void count();
void search();

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
void empty()
{
    struct Node *temp;
    if (head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        printf("List is not empty");
    }
}
void insertb()
{
    int d;
    struct Node *temp;
    temp = malloc(sizeof(struct Node));
    printf("\nEnter number to be inserted at the beginning: ");
    scanf("%d", &d);
    temp->data = d;
    temp->next = head;
    head = temp;
}
void inserte()
{
    int e;
    struct Node *temp, *h;
    temp = malloc(sizeof(struct Node));
    printf("Insert the element to be inserted in the end:");
    scanf("%d", &e);
    temp->next = 0;
    temp->data = e;
    h = head;
    while (h->next != NULL)
    {
        h = h->next;
    }
    h->next = temp;
}
void insertp()
{
    struct Node *temp, *newnode;
    int pos, v, i = 1;
    newnode = malloc(sizeof(struct Node));
    printf("\nEnter position and data :");
    scanf("%d %d", &pos, &v);
    temp = head;
    newnode->data = v;
    newnode->next = 0;

    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void deleteb()
{
    struct Node *temp;
    if (head == NULL)
        printf("\nList is empty\n");
    else
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}
void deletee()
{
    struct Node *temp, *prevnode;
    if (head == NULL)
        printf("\nList is Empty\n");
    else
    {
        temp = head;
        while (temp->next != 0)
        {
            prevnode = temp;
            temp = temp->next;
        }
        free(temp);
        prevnode->next = 0;
    }
}
void deletep()
{
    struct Node *temp, *position;
    int i = 1, pos;
    if (head == NULL)
        printf("\nList is empty\n");
    else
    {
        printf("\nEnter index : ");
        scanf("%d", &pos);
        position = malloc(sizeof(struct Node));
        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        position = temp->next;
        temp->next = position->next;
        free(position);
    }
}

void deletek()
{
    struct Node *current = head, *previous;
    int k;
    printf("Enter the key:");
    scanf("%d", &k);
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

void count()
{
    int c;
    struct Node *temp;
    if (head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            c++;
            temp = temp->next;
        }
        printf("The number of elements in the list is: %d \n", c);
    }
}

void search()
{
    struct Node *ptr;
    ptr = head;
    printf("\n Enter the element to search:");
    int s, f;
    scanf("%d", &s);
    while (ptr != NULL)
    {
        if (ptr->data == s)
        {
            printf("Element is present.");
            f = 0;
            break;
        }
        else
        {
            f = 1;
        }
        ptr = ptr->next;
    }
    if (f == 1)
    {
        printf("Element is not present. ");
    }
}

int main()
{
    int n;
    printf("Enter how many nodes you want to enter:");
    scanf("%d", &n);
    input(n);
    printf("\t Menu \t\n");
    printf("1:Traversal of the list.\n");
    printf("2:Check if the List is empty.\n");
    printf("3:Insert a node at the beginning.\n");
    printf("4:Insert a node at the end.\n");
    printf("5:Insert a node at the any Position.\n");
    printf("6:Delete a node at the beginning.\n");
    printf("7:Delete a node at the end.\n");
    printf("8:Delete a node at the any posiion.\n");
    printf("9:Delete a node for the given key.\n");
    printf("10:Count the total number of nodes.\n");
    printf("11:Search an element in the linked list.\n");
    int ch;
    printf("Enter your choice:");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        traverse();
        break;
    case 2:
        empty();
        break;
    case 3:
        insertb();
        traverse();
        break;
    case 4:
        inserte();
        traverse();
        break;
    case 5:
        insertp();
        traverse();
        break;
    case 6:
        deleteb();
        traverse();
        break;
    case 7:
        deletee();
        traverse();
        break;
    case 8:
        deletep();
        traverse();
        break;
    case 9:
        deletek();
        traverse();
        break;
    case 10:
        count();
        break;
    case 11:
        search();
        break;
    default:
        printf("Incorrect choice is given.");
    }
}