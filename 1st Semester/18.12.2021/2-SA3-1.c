#include <stdio.h>

int large(int a, int b);

int main()
{
    int i, j, result;
    printf("Enter 2 numbers that you want to compare : ");
    scanf("%d%d", &i, &j);
    large(i, j);
    return 0;
}

int large(int x, int y)
{
    if (x > y)
    {
        printf("The greater number is : %d", x);
    }
    else
    {
        printf("The greater number is : %d", y);
    }
}