#include <stdio.h>

int main()
{
    int array61[100], n;
    printf("How many numbers? (maximum - 100) ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter your %d number: ", i + 1);
        scanf("%d", &array61[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (array61[i] % 2 == 0 && array61[i] / 100 >= 1 && array61[i] / 1000 == 0)
            printf("%d\n", array61[i]);
    }

    return 0;
}