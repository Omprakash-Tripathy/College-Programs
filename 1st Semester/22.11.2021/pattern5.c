#include <stdio.h>
int main()
{
    int n, i61, j61;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (i61 = 1; i61 <= n; i61++)
    {       
        for (j61 = i61; j61 >0; j61--)
            printf("%d ",j61);      
        
        printf("\n");
    } 

    return 0;
}
