#include <stdio.h>
int main()
{
    int a, b, add, subtract, multiply;
    
    printf("Input 2 Integers\n");

    scanf("%d%d", &a, &b);
    add        = a + b;
    subtract = a - b;
    multiply = a * b;

    printf("Addition = %d\n",add);
    printf("Subtraction = %d\n",subtract);
    printf("Multiplication = %d\n",multiply);
    
    return 0;
}