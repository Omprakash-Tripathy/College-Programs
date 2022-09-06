#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void EvenOdd(int arr[], int n)
{
    int i;
    int left = 0, right = n - 1; // n is size of array
    while (right > left)
    {
        while (arr[left] % 2 == 0 && right > left) // even case
        {
            left++;
        }
        while (arr[right] % 2 == 1 && right > left) // odd case
        {
            right--;
        }

        if (right > left)
        {
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    };
}

int main()
{  
    int c[50];
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf("Enter an array : ");

    for(int i=0;i<size;i++)
    {
        scanf("%d\n", &c[i]);
    }

    EvenOdd(c,size);

    for(int i=0;i<size;i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}