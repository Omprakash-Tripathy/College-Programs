//Write a menu driven program to perform the following operations in a double linked list by using suitable user defined
//functions for each case.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void create(int n)
{
    struct node *newnode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("Enter the data of node 1: ");
        scanf("%d", &data);
        head->data = data;
        head->prev = NULL;
        head->next = NULL;
        temp = head;
        for (i = 2; i <= n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            if (newnode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);
                newnode->data = data;
                newnode->prev = temp;
                newnode->next = NULL;
                temp->next = newnode;
                temp = temp->next;
            }
        }
        printf("DOUBLY LINKED LIST CREATED SUCCESSFULLY");
    }
}

void display()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("Data = %d", temp->data);
            temp = temp->next;
        }
    }
}

void insertAtBeginning(int data)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newnode->data = data;
        newnode->prev = NULL;
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
        printf("DATA INSERTED SUCCESSFULLY");
    }
}

void insertAtEnd(int data)
{
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newnode->data = data;
        newnode->next = NULL;
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
        newnode->prev = temp;
        printf("DATA INSERTED SUCCESSFULLY");
    }
}

void insertAtN(int data, int position)
{
    struct node *newnode, *temp;
    int i;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newnode->data = data;
        temp = head;
        for (i = 2; i <= position - 1; i++)
        {
            temp = temp->next;
            if (temp == NULL)
                break;
        }
        if (temp != NULL)
        {
            newnode->prev = temp;
            newnode->next = temp->next;
            if (temp->next != NULL)
                temp->next->prev = newnode;
            temp->next = newnode;
            printf("DATA INSERTED SUCCESSFULLY");
        }
        else
        {
            printf("Invalid position.");
        }
    }
}

void deleteFromBeginning()
{
    struct node *toDelete;
    if (head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        printf("DATA DELETED = %d", toDelete->data);
        free(toDelete);
        printf("SUCCESSFULLY DELETED FROM LIST");
    }
}

void deleteFromEnd()
{
    struct node *toDelete;
    if (head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        if (toDelete->next == NULL)
        {
            head = NULL;
            free(toDelete);
            printf("SUCCESSFULLY DELETED FROM LIST");
        }
        else
        {
            while (toDelete->next != NULL)
                toDelete = toDelete->next;
            toDelete->prev->next = NULL;
            printf("DATA DELETED = %d", toDelete->data);
            free(toDelete);
            printf("SUCCESSFULLY DELETED FROM LIST");
        }
    }
}

void deleteFromN(int position)
{
    struct node *toDelete;
    int i;
    if (head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        for (i = 2; i <= position; i++)
        {
            toDelete = toDelete->next;
            if (toDelete == NULL)
                break;
        }
        if (toDelete != NULL)
        {
            if (toDelete->next != NULL)
                toDelete->next->prev = toDelete->prev;
            if (toDelete->prev != NULL)
                toDelete->prev->next = toDelete->next;
            if (toDelete == head)
                head = head->next;
            printf("DATA DELETED = %d", toDelete->data);
            free(toDelete);
            printf("SUCCESSFULLY DELETED FROM LIST");
        }
        else
        {
            printf("Invalid position.");
        }
    }
}

int main()
{
    int n, data, choice = 1;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    create(n);
    while (choice != 0)
    {
        printf("1. Display list \n2. Insert at beginning \n3. Insert at end \n4. Insert at any position
    5. Delete from beginning
    6. Delete from end
    7. Delete from any position
    0. Exit");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            display();
            break;
        case 2:
            printf("Enter data to insert at beginning of the list: ");
            scanf("%d", &data);
            insertAtBeginning(data);
            break;
        case 3:
            printf("Enter data to insert at end of the list: ");
            scanf("%d", &data);
            insertAtEnd(data);
            break;
        case 4:
            printf("Enter data to insert at any position of the list: ");
            scanf("%d", &data);
            printf("Enter the position to insert new node: ");
            scanf("%d", &n);
            insertAtN(data, n);
            break;
        case 5:
            deleteFromBeginning();
            break;
        case 6:
            deleteFromEnd();
            break;
        case 7:
            printf("Enter the position to delete new node: ");
            scanf("%d", &n);
            deleteFromN(n);
            break;
        case 0:
            break;
        default:
            printf("Invalid choice, please enter valid choice.");
        }
    }