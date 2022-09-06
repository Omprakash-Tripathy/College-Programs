#include <stdio.h>

int calculate(int n1, int n2, int operand);

int main()
{
    int num1, num2, oper;

    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    printf("Enter your operand from the menu : \n1 - Addition \n2 - Subtraction \n3 - Multiplication \n4 - Division \n");
    scanf("%d", &oper);

    int answer = calculate(num1, num2, oper);
    printf ("%d", answer);
    return 0;
}

int calculate(int n1, int n2, int operand)
{
    int result;
    if (operand == 1)
        result = n1 + n2;
    else if (operand == 2)
        result = n1 - n2;
    else if (operand == 3)
        result = n1 * n2;
    else if (operand == 4)
        result = n1 / n2;
    else
        result = 0;
    return result;
}