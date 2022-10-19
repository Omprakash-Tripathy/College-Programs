#include <stdio.h>

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n;
    printf("Enter the number you want to find factorial of : ");
    scanf("%d", &n);
    printf("The factorial of %d is %d", n , factorial(n));
    return 0;
}