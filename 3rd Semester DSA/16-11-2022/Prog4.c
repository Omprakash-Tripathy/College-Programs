// 4. Given an array “container[]” and integer “hunt”. WAP to find whether “hunt” isvpresent in container[] or 
// not. If present, then triple the value of “hunt” and search again. Repeat these steps until “hunt” is not found.
// Finally return the value of “hunt”. Input : container[] = {1, 2, 3} and hunt = 1 then Output : 9
// Explanation: Start with hunt = 1. Since it is present in array, it becomes 3. Now 3 is present in array
// and hence hunt becomes 9 . Since 9 is not present, program returns 9.

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