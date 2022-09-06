#include <stdio.h>

int main()
{

    int a[100];
    int size, sum, count = 0;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    // Entering values in array
    printf("\nEnter elements in array :\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the desired sum : ");
    scanf("%d", &sum);

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)

        {
            if (a[i] + a[j] == sum)
                count++;
        }
    }

    printf(" %d pairs are present in array whose sum is desired sum", count);
    return 0;
}