//WAP using a function to reverse a queue using stack

#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

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

void reverseQueue()
{
    int stack[MAX];
    int top = -1;
    while(!isEmpty())
    {
        top++;
        stack[top] = dequeue();
    }
    while(top != -1)
    {
        enqueue(stack[top]);
        top--;
    }
    display();
}

void display()
{
    int i;
    if(isEmpty())
    {
        printf("Queue is empty");

    }
    else
    {
        printf("Queue is :");

        for(i=front; i<=rear; i++)
            printf("%d ",queue[i]);
        printf("");

    }
}

int main()
{
    int choice,item;
    while(1)
    {
        printf("\n1.Enqueue \n");

        printf("2.Dequeue \n");

        printf("3.Display the front element \n");

        printf("4.Display all queue elements \n");

        printf("5.Reverse the queue \n");

        printf("6.Quit \n");

        printf("Enter your choice : \n");

        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("Input the element for adding in queue : \n");

            scanf("%d",&item);

            enqueue(item);

            break;

        case 2:
            item = dequeue();

            printf("Deleted element is  %d",item);

            break;

        case 3:
            printf("Element at the front is %d",peek());

            break;

        case 4:
            display();

            break;

        case 5:
            reverseQueue();

            break;

        case 6:
            exit(1);

        default:
            printf("Wrong choice");

        }

    }

    return 0;

}