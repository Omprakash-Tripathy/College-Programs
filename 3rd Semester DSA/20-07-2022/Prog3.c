#include <stdio.h>
 
int main()
{
    int number_61, i, r, arr[30];
 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &number_61);
 
    printf("Enter the elements of the array: ");
    for (i = 0; i < number_61; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number to be searched: ");
    scanf("%d", &r);
    
    i = 0;
    while (i < number_61 && r != arr[i])
    {
        i++;
    }
    
    if (i < number_61)
    {
        printf("The element is found in the position = %d", i + 1);
    }
    else
    {
        printf("The entered Element is not found in the array");
    }
    
    return 0;
}