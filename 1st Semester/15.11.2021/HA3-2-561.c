#include <stdio.h>

int main()
{
    int num1, num2, opt;
    printf("Enter num1 and num2 :");
    scanf("%d %d", &num1, &num2);
    printf("Menu: \n1. addition \n2. subtraction \n3. multiplication \n4. divison \nEnter your choice:\n");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        printf("Sum :  %d\n", num1 + num2);
        break;
    case 2:
        printf("Difference : %d\n", num1 - num2);
        break;
    case 3:
        printf("Product : %d\n", num1 * num2);
        break;
    case 4:
        printf("Quotient : %.2f\n", (float)num1 / (float)num2);
        break;
    case 5:
        break;
    default:
        printf("Please enter correct option\n");
        break;
    }
    return 0;
}