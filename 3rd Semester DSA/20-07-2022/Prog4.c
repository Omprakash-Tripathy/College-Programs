#include <stdio.h>

int main()
{
    int i, j, flag_61, n, number_61[30];
    printf("Enter the number of elements in array \n");
    scanf("%d", &n);
 
    printf("Enter the elements \n");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &number_61[i]);
    }
    for (i = 0; i < n; ++i) 
    {
        for (j = i + 1; j < n; ++j)
            {
                if (number_61[i] > number_61[j]) 
                {
                    flag_61 =  number_61[i];
                    number_61[i] = number_61[j];
                    number_61[j] = flag_61;
                }
            }
    }
    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; ++i)
    {
        printf("%d\n", number_61[i]);
    }
}