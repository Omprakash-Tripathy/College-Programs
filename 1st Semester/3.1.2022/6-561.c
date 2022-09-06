#include <stdio.h>
int count;
void even(int start, int end)
{
    if (count <= end)
    {
        if (count % 2 == 0)
        {
            printf("%d\t", count);
        }
        count++;
        even(start, end);
    }
    else
    {
        return;
    }
}
void odd(int start, int end)
{
    if (count <= end)
    {
        if (count % 2 != 0)
        {
            printf("%d\t", count);
        }
        count++;
        odd(start, end);
    }
    else
    {
        return;
    }
}
int main()
{
    int start, end, display;
    printf("Enter range of numbers in the format x-y : ");
    scanf("%d-%d", &start, &end);
    count = start;
    printf("Enter 0 for even numbers in the given range or 1 for odd numbers in the given range: ");
    scanf("%d", &display);
    if (display == 0)
    {
        printf("Even numbers in the given range are: ");
        even(start, end);
    }
    else if (display == 1)
    {
        printf("Odd numbers in the given range are: ");
        odd(start, end);
    }
    else
    {
        printf("Enter a valid input");
    }
    return 0;
}