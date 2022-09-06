#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    
    int arr[n];
    int i;
    
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The Reversed array is:\n");
    
    for(i = n-1; i >= 0; i--)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}