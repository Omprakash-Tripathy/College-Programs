#include <stdio.h>

int main()
{
    int ch = 65;
    int i, j_61, k_61, m_61;
    printf("Pattern : \n");
    for (i = 1; i <= 5; i++)
    {
        for (j_61 = 5; j_61 >= i; j_61--)
        {
            printf(" ");
        }
        for (k_61 = 1; k_61 <= i; k_61++)
        {
            printf("%c", ch++);
        }
        ch--;
        for (m_61 = 1; m_61 < i; m_61++)
        {
            printf("%c", --ch);
        }
        printf("\n");
        ch = 65;
    }
    return 0;
}