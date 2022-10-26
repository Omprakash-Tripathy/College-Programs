//Write a menu driven program to implement queue operations such as enqueue, dequeue, peek, display of elements, isEmpty 
//using linked list.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

int isEmpty()
{
    if(front == NULL)
        return 1;
    else
        return 0;
}

void enqueue(int item)
{
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = item;
    newNode->next = NULL;
    if(front == NULL)
        front = newNode;
    else
        rear->next = newNode;
    rear = newNode;
}

int dequeue()
{
    int item;
    struct node *temp;
    if(isEmpty())
    {
        printf("Queue Underflow");
        exit(1);
    }
    temp = front;
    item = temp->data;
    front = front->next;
    free(temp);
    return item;
}

int peek()
{
    if(isEmpty())
    {
        printf("Queue Underflow");
        exit(1);
    }
    return front->data;
}

void display()
{
    struct node *temp;
    if(isEmpty())
    {
        printf("Queue is empty");
        return;
    }
    temp = front;
    printf("Queue elements are:");
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("");
}

int main()
{
    int choice, item;
    while(1)
    {
        printf("\n1.Enqueue \n");
        printf("2.Dequeue \n");
        printf("3.Peek \n");
        printf("4.Display \n");
        printf("5.Quit \n");
        printf("Enter your choice : \n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Input the element for adding in queue : ");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                item = dequeue();
                printf("Deleted element is  %d", item);
                break;
            case 3:
                printf("Element at the front of the queue is : %d", peek());
                break;
            case 4:
                display();
                break;
            case 5:
                exit(1);
            default:
                printf("Wrong choice");
        }
    }
}