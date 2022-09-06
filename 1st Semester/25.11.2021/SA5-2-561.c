#include <stdio.h>

int main()
{
    int array61[1000], n, sum61 = 0;
    printf("How many numbers? (maximum - 1000) ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter your %d number: ", i + 1);
        scanf("%d", &array61[i]);
    }

    for (int i = 0; i < n; i++)
        sum61 += array61[i];

    printf("The sum of numbers in array is %d\n", sum61);
    return 0;
}