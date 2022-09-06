#include <stdio.h>
int main()
{
    int i_61, j_61, n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (i_61 = 1; i_61 <= n; i_61++)
    {
        for (j_61 = i_61; j_61 >= 1; j_61--)
        {
            printf("%c ", 'A' + j_61 - 1);
        }
        printf("\n");
    }
    return 0;
}