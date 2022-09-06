#include <stdio.h>

int large();

int main()
{ 
    int result;
    result = large();
    return 0;
}

int large()
{
    int i, j;
    printf("Enter 2 numbers that you want to compare : ");
    scanf("%d%d", &i, &j);

    if (i > j)
    {
        printf("The greater number is : %d", i);
    }
    else
    {
        printf("The greater number is : %d", j);
    }
}