#include <stdio.h>

int main()
{
    int a[10], b[10], size1, size2, c = 0;

    printf("Enter the size of 1st array : ");
    scanf("%d", &size1);

    printf("Enter the size of 2nd array : ");
    scanf("%d", &size2);

    // Entering valuesin arrays
    printf("\nEnter elements in array 1 :\n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter elements in array 2 :\n");

    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &b[i]);
    }

    // Checking if array b is subset of a or not

    for (int i = 0; i < size1; i++)
    {

        for (int j = 0; j < size2; j++)
        {
            if (b[j] == a[i])
            {
                c++;
                break;
            }
        }
    }
    if (c > 0)
        printf("The array 2 is subset of array 1\n");
    else
    {
        printf("The array 2 is not a subset of array 1\n");
    }
    return 0;
}