#include <stdio.h>

int SUM(int x, int y);

int main()
{
    int num1, num2;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);

    int SUM1 = SUM(num1, num2);

    printf("The sum of %d and %d is %d", num1, num2, SUM1);
    return 0;
}

int SUM(int x, int y)
{
    int SUM1;
    SUM1 = x + y;
    return SUM1;
}