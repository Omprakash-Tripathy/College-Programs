//4.	Write a C program to search an element in array using pointers.

#include <stdio.h>
int i, j;

int search(int n, int *p, int m)
{
    for (i = 0; i < n; i++)
    {
        if (m == p[i])
        {
            j = 1;
            break;
        }
    }
    if (j == 1)
    {
        printf("%d is present in the %d index of array", m, i);
    }
    else
    {
        printf("%d is not present in the array", m);
    }
}

int main()
{
    int n, m;
    printf("Enter the size of your array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element you want to find : ");
    scanf("%d", &m);
    search(n, a, m);
    return 0;
}