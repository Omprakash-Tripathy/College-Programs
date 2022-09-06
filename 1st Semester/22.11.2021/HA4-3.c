#include <stdio.h>

int main()
{
    int i, j, rows_61, space_61 = 0;
    printf("Enter the number of rows : ");
    scanf("%d", &rows_61);

    for (i = rows_61; i >= 1; i--)
    {
        for (j = 1; j <= space_61; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
        space_61++;
    }
    return 0;
}