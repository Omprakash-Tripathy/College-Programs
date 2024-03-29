//Write a menu driven program to perform the following operations of a stack using array by using suitable user defined functions
// for each case. a) Check if the stack is empty b) Display the contents of stack c) Push d) Pop

#include<stdio.h>
#include<stdlib.h>

int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);

int main()
{
    top=-1;
    printf("Enter the size of STACK:\n");
    scanf("%d",&n);
    printf("STACK OPERATIONS USING ARRAY\n");
    printf(" 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
    do
    {
        printf("Enter the Choice:");

        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("Exit Point");
                break;
            }
            default:
            {
                printf("Please Enter a Valid Choice(1/2/3/4)\n");
            }
        }
    }
    while(choice!=4);
    return 0;
}

void push()
{
    if(top>=n-1)
    {
        printf("STACK is over flow\n");
    }
    else
    {
        printf("Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}

void pop()
{
    if(top<=-1)
    {
        printf("Stack is under flow\n");
    }
    else
    {
        printf("The popped elements is %d",stack[top]);
        top--;
    }
}

void display()
{
    if(top>=0)
    {
        printf("The elements in STACK \n");
        for(i=top; i>=0; i--)
        {
            printf("%d",stack[i]);
        }
    }
    else
    {
        printf("The STACK is empty\n");
    }
}