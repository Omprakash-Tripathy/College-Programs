//Write a menu driven program to implement queue operations such as enqueue, dequeue,
//peek, display of elements, isEmpty, isFull using static array.

#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int item)
{
    if(isFull())
    {
        printf("Queue Overflow");
        return;
    }
    if(front == -1)
        front = 0;
    rear = rear + 1;
    queue[rear] = item;
}

int dequeue()
{
    int item;
    if(isEmpty())
    {
        printf("Queue Underflow");
        exit(1);
    }
    item = queue[front];
    front = front + 1;
    return item;
}

int peek()
{
    if(isEmpty())
    {
        printf("Queue Underflow");
        exit(1);
    }
    return queue[front];
}

int isEmpty()
{
    if(front == -1 || front > rear)
        return 1;
    else
        return 0;
}

int isFull()
{
    if(rear == MAX - 1)
        return 1;
    else
        return 0;
}

void display()
{
    int i;
    if(isEmpty())
    {
        printf("Queue is empty");
        return;
    }
    printf("Queue is:");
    for(i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("");
}

int main()
{
    int choice, item;
    while(1)
    {
        printf(" \n1. Enqueue\n 2. Dequeue\n 3. Peek\n 4. Display\n 5. isEmpty\n 6. isFull\n 7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter the element to be inserted: ");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                item = dequeue();
                printf("Deleted element is %d", item);
                break;
            case 3:
                printf("Element at the front is %d", peek());
                break;
            case 4:
                display();
                break;
            case 5:
                if(isEmpty())
                    printf("Queue is empty");
                else
                    printf("Queue is not empty");
                break;
            case 6:
                if(isFull())
                    printf("Queue is full");
                else
                    printf("Queue is not full");
                break;
            case 7:
                exit(0);
            default:
                printf("Wrong choice");
        }
    }
    return 0;
}