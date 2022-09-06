#include <stdio.h>

int main()
{
    int array61[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter your %d number: ", i + 1);
        scanf("%d", &array61[i]);
    }

    for (int i = 0; i < 10; i++)
        printf("%d\n", array61[i]);

    return 0;
}