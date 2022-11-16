// 1. WAP to read an array of integers and search for an element using linear search.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10],i,n,flag=0;
    clrscr();
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(a[i]==n)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Element found at position %d",i+1);
    }
    else
    {
        printf("Element not found");
    }
    getch();
}