// WAP to search an element in a simple linked list, if found delete that node
// and insert that node at beginning.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *start = NULL;
void createList();
void traverse();
void search();
void delete();
void insert();

void createList()
{
    if (start == NULL)
    {
        int n;
        printf("\nEnter the number of nodes: ");
        scanf("%d", &n);
        if (n != 0)
        {
            int data;
            struct node *newnode;
            struct node *temp;
            newnode = malloc(sizeof(struct node));
            start = newnode;
            temp = start;
            printf("\nEnter number to"
                   " be inserted : ");
            scanf("%d", &data);
            start->data = data;

            for (int i = 2; i <= n; i++)
            {
                newnode = malloc(sizeof(struct node));
                temp->link = newnode;
                printf("\nEnter number to"
                       " be inserted : ");
                scanf("%d", &data);
                newnode->data = data;
                temp = temp->link;
            }
        }
        printf("\nThe list is created\n");
    }
    else
        printf("\nThe list is already created\n");
}

void traverse()
{
    if (start == NULL)
        printf("\nThe list is empty\n");
    else
    {
        struct node *temp;
        temp = start;
        printf("\nThe list is : ");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}

void search()
{
    if (start == NULL)
        printf("\nThe list is empty\n");
    else
    {
        int data;
        printf("\nEnter the number to be searched : ");
        scanf("%d", &data);
        struct node *temp;
        temp = start;
        while (temp != NULL)
        {
            if (temp->data == data)
            {
                printf("\nThe number is found\n");
                break;
            }
            else
                temp = temp->link;
        }
        if (temp == NULL)
            printf("\nThe number is not found\n");
    }
}

void delete()
{
    if (start == NULL)
        printf("\nThe list is empty\n");
    else
    {
        int data;
        printf("\nEnter the number to be deleted : ");
        scanf("%d", &data);
        struct node *temp;
        temp = start;
        while (temp->link != NULL)
        {
            if (temp->data == data)
            {
                temp->data = temp->link->data;
                temp->link = temp->link->link;
                printf("\nThe number is deleted\n");
                break;
            }
            else
                temp = temp->link;
        }
        if (temp->link == NULL)
        {
            if (temp->data == data)
            {
                start = NULL;
                printf("\nThe number is deleted\n");
            }
            else
                printf("\nThe number is not found\n");
        }
    }
}

void insert()
{
    if (start == NULL)
        printf("\nThe list is empty\n");
    else
    {
        int data;
        printf("\nEnter the number to be inserted : ");
        scanf("%d", &data);
        struct node *newnode;
        newnode = malloc(sizeof(struct node));
        newnode->data = data;
        newnode->link = start;
        start = newnode;
        printf("\nThe number is inserted\n");
    }
}

int main()
{
    int choice;
    do
    {
        printf("\n1. Create list\n");
        printf("2. Traverse list\n");
        printf("3. Search\n");
        printf("4. Delete\n");
        printf("5. Insert\n");
        printf("6. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            createList();
            break;
        case 2:
            traverse();
            break;
        case 3:
            search();
            break;
        case 4:
            delete();
            break;
        case 5:
            insert();
            break;
        case 6:
            printf("\nExiting\n");
            break;
        default:
            printf("\nInvalid choice\n");
        }
    } while (choice != 6);
    return 0;
}