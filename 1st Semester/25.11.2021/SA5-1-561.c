#include <stdio.h>

int main()
{
    int array61[1000], n;
    printf("How many numbers? (maximum - 1000) ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &array61[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", array61[i]);
    }

    return 0;
}