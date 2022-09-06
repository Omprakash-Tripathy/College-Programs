// 1.	Write a program in C to sort an array using Pointer

#include <stdio.h>

void sort(int n, int *p)
{
    int i, j, temp;

    for (i = 0; i < n; i++)
    {

        for (j = i + 1; j < n; j++)
        {

            if (*(p + j) < *(p + i))
            {

                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
        printf("%d ", *(p + i));
}

int main()
{
    int n;
    printf("Enter the size : ");
    scanf("%d", &n);
    int arr[100];

    for (int a = 0; a < n; a++)
    {
        printf("Enter element number %d of array : ", a);
        scanf("%d", &arr[a]);
    }

    sort(n, arr);

    return 0;
}