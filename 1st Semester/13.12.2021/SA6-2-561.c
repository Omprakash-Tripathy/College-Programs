#include<stdio.h>

int fact(int x);

int main()
{
    int num1;
    printf("Enter a number: ");
    scanf("%d",&num1);

    int factorial = fact(num1);

    printf("The factorial of %d is %d", num1, factorial);
    return 0;
}

int fact(int x)
{
    int factorial = 1;
    for (int i = 2; i < x+1; i++)
        factorial*=i;
    return factorial;
}    