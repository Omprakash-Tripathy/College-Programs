//3. Write a menu driven program to implement circular queue operations such as Enqueue, Dequeue,Peek, Display of elements, 
//IsEmpty using linked list.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    if (rear == NULL)
    {
        front = rear = newNode;
        rear->next = front;
        return;
    }
    rear->next = newNode;
    rear = newNode;
    rear->next = front;
}

void dequeue()
{
    if (front == NULL)
    {
        printf("Queue is empty");
        return;
    }
    struct node *temp = front;
    front = front->next;
    if (front == NULL)
        rear = NULL;
    printf("Deleted element is %d", temp->data);
    free(temp);
}

void peek()
{
    if (front == NULL)
    {
        printf("Queue is empty");
        return;
    }
    printf("Element at front is %d", front->data);
}

void display()
{
    if (front == NULL)
    {
        printf("Queue is empty");
        return;
    }
    printf("Queue is: ");
    struct node *temp = front;
    while (temp->next != front)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d ", temp->data);
}

int main()
{
    int choice, data;
    while (1)
    {
        printf("\n1. Enqueue\n 2. Dequeue\n 3. Peek\n 4. Display\n 5. Exit\n Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice");
        }
    }
    return 0;
}