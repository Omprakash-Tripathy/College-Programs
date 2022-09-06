#include <stdio.h>

int main()
{
    int arr1_61[1000], arr2_61[1000];
    int n, i, j61 = 0;

    printf("Enter number of elements in array : ");
    scanf("%d", &n);

    printf("Enter arr1_61 elements : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1_61[i]);
        if (arr1_61[i] % 5 == 0)
        {
            arr2_61[j61] = arr1_61[i];
            j61++;
        }
    }

    printf("Elements of arr2_61 : ");
    for (i = 0; i < j61; i++)
    {
        printf("%d ", arr2_61[i]);
    }
    return 0;
}