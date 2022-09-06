#include <stdio.h>

int main()
{
    int num, factorial, i = 1;
    factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (i < num + 1)
    {
        factorial = factorial * i;
        i++;
    }

    printf("The factorial of the given number is %d\n", factorial);
    return 0;
}