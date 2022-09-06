#include <stdio.h>

int main()
{
    int start_61, end_61, even, odd;    
    printf("Enter starting number and ending number : ");
    scanf("%d %d", &start_61, &end_61);
    if (start_61 % 2 == 0)
    {
        even = start_61;
        odd = start_61 + 1;
    }
    else
    {
        odd = start_61;
        even = start_61 + 1;
    }
    printf("The even numbers are\n");
    while (even <= end_61)
    {
        printf("%d\n", even);
        even += 2;
    }
    printf("The odd numbers are\n");
    while (odd <= end_61)
    {
        printf("%d\n", odd);
        odd += 2;
    }
    return 0;
}