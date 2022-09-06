#include <stdio.h>
int main()
{
    int i61, j61, n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i61 = 1; i61 <= n; i61++)
    {
        for (j61 = 0; j61 < n - i61; j61++)
        {
            printf("  ");
        }
        for (j61 = 0; j61 < i61; j61++)
        {
            printf("%d ", j61 + 1);
        }
        for (j61 = i61 - 1; j61 > 0; j61--)
        {
            printf("%d ", j61);
        }
        printf("\n");
    }
    return 0;
}