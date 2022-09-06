#include <stdio.h>
int main()
{
    int i, j_61, n;
    char ch;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        ch ='A';
        for (j_61 = 1; j_61 <= i; j_61++)
        {
            printf("%c ", ch);
            ch = ch + 1;
        }
        printf("\n");
    }
    return 0;
}
