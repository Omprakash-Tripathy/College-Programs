#include <stdio.h>

int main()
{
    int a[20], i, n, element61, position61;
    printf(" Enter the Numbers of elements: ");
    scanf("%d", &n);
    printf("\n Enter the elements of array : \n");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Array entered is :\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d \t", a[i]);
    }
    printf("\n Enter the position you want to enter :");
    scanf("%d", &position61);
    printf("\n Enter the element you want to enter :");
    scanf("%d", &element61);

    for (i = 1; i <= n; i++)
    {
        if (i > position61)
        {
            a[i] = a[i - 1];
        }
        else
        {
            if (i == position61)
            {
                a[i] = element61;
            }
            else
            {
                a[i] = a[i];
            }
        }
    }
    printf("\n Array After Inserting element :\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    return (0);
}