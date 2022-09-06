#include <stdio.h>
int main()
{
    int rows_61, k = 1, space_61, i, j;
    printf("\nEnter the number of rows_61 : ");
    scanf("%d", &rows_61);
    printf("\n");

    for (i = 0; i < rows_61; i++)
    {
        for (space_61 = 1; space_61 <= rows_61 - i; space_61++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                k = 1;
            else
                k = k * (i - j + 1) / j;

            printf("%3d", k);
        }
        printf("\n\n");
    }

    return 0;
}