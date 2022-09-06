#include <stdio.h>

int main()
{
    int n, i, sum_61 = 0, d, num;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    num = n;
    while (n != 0)
    {
        d = n % 10;
        sum_61 = sum_61 + d;
        n = n / 10;
    }
    printf("\nSum of digits of the number %d is = %d", num, sum_61);
    return 0;
}