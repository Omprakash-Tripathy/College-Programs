#include <stdio.h>

int main()
{
    int array61[1000], n, temp = 0;
    printf("How many numbers? (maximum - 1000) ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter your %d number: ", i + 1);
        scanf("%d", &array61[i]);
    }

    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (array61[j] > array61[j + 1])
            {
                temp = array61[j];
                array61[j] = array61[j + 1];
                array61[j + 1] = temp;
            }
        }
    }

    for (int k = 0; k < n; k++)
        printf("%d\n", array61[k]);

    return 0;
}