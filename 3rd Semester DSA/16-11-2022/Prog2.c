// 2. WAP to read an array of integers and search for an element using binary search.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10],i,n,flag=0,mid,first,last;
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
    first=0;
    last=n-1;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]==n)
        {
            flag=1;
            break;
        }
        else if(a[mid]>n)
        {
            last=mid-1;
        }
        else
        {
            first=mid+1;
        }
    }
    if(flag==1)
    {
        printf("Element found at position %d",mid+1);
    }
    else
    {
        printf("Element not found");
    }
    getch();
}