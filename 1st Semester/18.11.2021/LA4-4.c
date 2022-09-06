#include <stdio.h>
int main()
{
    int n, i, pattern_61 = 0;
    printf("Enter the range : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        pattern_61 = (pattern_61 * 2) + 1;
        printf("%d ", pattern_61);
    }
}