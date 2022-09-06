#include <stdio.h>
int main()
{
    int i_61, j_61, n;
    scanf("%d", &n);
    for (i_61 = 1; i_61 <= n; i_61++)
    {
        if (i_61 % 2 == 0)
        {
            for (j_61 = i_61; j_61 >= 1; j_61--)
            {
                printf("%d ", 1 + j_61 - 1);
            }
            printf("\n");
        }
        else
        {
            for (j_61 = 1; j_61 <= i_61; j_61++)
            {
                printf("%d ", 1 + j_61 - 1);
            }
            printf("\n");
        }
    }
    return 0;
}