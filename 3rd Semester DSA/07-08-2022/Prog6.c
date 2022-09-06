#include <stdio.h>

int main()
{
    int size, a[50];
    int count = 0;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    // Entering valuesin arrays
    printf("\nEnter elements in array 1 :\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    // Counting strictly consecutive increasing subarrays.
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            count++;
        }
    }

    printf("The number of strictly consecutive increasing subarrays in the array are %d", count);
    return 0;
}