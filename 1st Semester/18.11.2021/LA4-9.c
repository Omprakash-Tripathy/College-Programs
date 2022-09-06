#include <stdio.h>

int main()
{
    int n, r, sum_61 = 0, temp_61;
    printf("Enter your number : ");
    scanf("%d", &n);
    temp_61 = n;
    while (n > 0)
    {
        r = n % 10;
        sum_61 = sum_61 + (r * r * r);
        n = n / 10;
    }
    if (temp_61 == sum_61)
        printf("The entered number is an Armstrong  number");
    else
        printf("The entered number is not an Armstrong  number");
    return 0;
}