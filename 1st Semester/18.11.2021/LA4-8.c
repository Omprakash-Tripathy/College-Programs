#include <stdio.h>
int main()
{
    int n, reverse_61 = 0, remainder_61;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        remainder_61 = n % 10;
        reverse_61 = reverse_61 * 10 + remainder_61;
        n = n / 10;
    }
    printf("The reversed Number is : %d", reverse_61);
    return 0;
}