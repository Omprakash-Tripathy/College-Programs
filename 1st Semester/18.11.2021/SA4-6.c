#include <stdio.h>
int main()
{
    int n, i, test = 1;
    printf("\nEnter A Number :");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            test = 0;
            break;
        }
    }
    if (test == 1)
        printf("\nThe Number %d is a prime", n);
    else
        printf("\nThe Number %d is not a prime", n);
    return 0;
}