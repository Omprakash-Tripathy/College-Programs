#include <stdio.h>
int main()
{
    int i, count_61 = 0, j_61;
    printf("Odd prime numbers between 1 to 50 are:\n");
    for (i = 3; i <= 50; i++)
    {
        for (j_61 = 2; j_61 < i; j_61++)
        {
            if (i % j_61 == 0)
            {
                count_61++;
                break;
            }
        }
        if (count_61 == 0 && i != 1)
        {
            printf("%d\n", i);
        }
        count_61 = 0;
    }
    return 0;
}