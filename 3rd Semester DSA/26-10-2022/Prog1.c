//1. Write a menu driven program to implement Deques (both Inputrestricted and Output-restricted) operations such as Enqueue,
//Dequeue, Peek, Display of elements, IsEmpty, IsFull using static array.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX 10

int front = -1, rear = -1;

int queue[MAX];

void enqueue(int data)
{
    if (rear == MAX - 1)
    {
        printf("Queue is full");
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = data;
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue is empty");
        return;
    }
    printf("Deleted element is %d", queue[front]);
    front++;
    if (front > rear)
        front = rear = -1;
}

void peek()
{
    if (front == -1)
    {
        printf("Queue is empty");
        return;
    }
    printf("Element at front is %d", queue[front]);
}

void display()
{
    if (front == -1)
    {
        printf("Queue is empty");
        return;
    }
    printf("Queue is: ");
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
}

void isEmpty()
{
    if (front == -1)
        printf("Queue is empty");
    else
        printf("Queue is not empty");
}

void isFull()
{
    if (rear == MAX - 1)
        printf("Queue is full");
    else
        printf("Queue is not full");
}

int main()
{
    int choice, data;
    while (1)
    {
        printf("\n1. Enqueue\n 2. Dequeue\n 3. Peek\n 4. Display\n 5. IsEmpty\n 6. IsFull\n 7. Exit\n ");
        printf("Enter your choice: ");
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
            isEmpty();
            break;
        case 6:
            isFull();
            break;
        case 7:
            exit(0);
        default:
            printf("Invalid choice");
        }
    }
    return 0;
}