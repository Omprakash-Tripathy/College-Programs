#include <stdio.h>
int main()
{
    int num1, num2, choice;
    printf("Enter Num1 :");
    scanf("%d", &num1);
    printf("Enter Num2 :");
    scanf("%d", &num2);
    printf("Menu: \n1. addition \n2. subtraction \n3. multiplication \n4. divison \nEnter your choice:\n");
    scanf("%d", &choice);
    if (choice == 1)
        printf("Sum :  %d\n", num1 + num2);
    else if (choice == 2)
        printf("Difference : %d\n", num1 - num2);
    else if (choice == 3)
        printf("Product : %d\n", num1 * num2);
    else if (choice == 4)
        printf("Quotient : %.2f\n", (float)num1 / (float)num2);
    else
        printf("INVALID INPUT\n");
    return 0;
}