#include <stdio.h>

int main()
{
    int array61[1000], n, large = 0;
    printf("How many numbers? (maximum - 1000) ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter your %d number: ", i + 1);
        scanf("%d", &array61[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (large < array61[i] && array61[i] % 2 == 0)
            large = array61[i];
    }

    printf("The largest number in array is %d\n", large);
    return 0;
}