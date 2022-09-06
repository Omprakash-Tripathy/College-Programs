#include<stdio.h>
int main()
{
    int n, i61, j61;
    printf("Enter n : ");
    scanf("%d", &n);

    for (i61 = 1; i61 <= n; i61++)
    {       
        for (j61 = n- i61; j61 > 0; j61--)
            printf("  ");

        for (j61 = i61; j61 >= 1; j61--)
            printf("%d ",j61); 

        for (j61 = 1; j61 < i61; j61++)
            printf("%d ",j61+1);       
        
        printf("\n");
    }

    for (i61 = 0; i61 <= n-1; i61++)
    {
        for (j61 = 0; j61 <= i61; j61++)
            printf("  ");
        
        for (j61 = n-i61-1; j61 >= 1; j61--)
            printf("%d ",j61);

        for (j61 = 2; j61 <=  n-i61-1; j61++)
            printf("%d ",j61);       

        printf("\n");
        
    } 

    return 0;
}
