#include <stdio.h>
int main()
{
    int n, i, j_61, k_61;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        for (j_61 = 1; j_61 <= n - i; j_61++)
        {
            printf(" ");
        }
        for (k_61 = 1; k_61 <= i; k_61++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
