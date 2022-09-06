#include <stdio.h>
int main()
{
    int n, i61, j61;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (i61 = 1; i61 <= n; i61++)
    {
        for (j61 = 1; j61 <= i61; j61++)
        {
            if (i61%2 == 1)
                printf("%c ",'A'+i61/2);
            else
                printf("%d ",i61/2);
            
        }
        printf("\n");
    }

    return 0;
}
