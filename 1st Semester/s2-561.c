#include <stdio.h>

int main()
{
    int mat61[3][3], i, j, sum, prod;
    sum = 0;
    prod = 1;
    printf("Enter all 9 elements of 3*3 matrix:-\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat61[i][j]);
            sum = sum + mat61[i][j];
            prod = prod * mat61[i][j];
        }
    }
    printf("Sum of all elements = %d \n", sum);
    printf("Product of all elements = %d \n", prod);
    int ans = sum + prod;

    printf("Summation of sum of all elements and product of all elements = %d", ans);

    return 0;
}