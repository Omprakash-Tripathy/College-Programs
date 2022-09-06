#include <stdio.h>

int large(int a, int b);

int main()
{
    int i, j, result;
    printf("Enter 2 numbers that you want to compare : ");
    scanf("%d%d", &i, &j);
    result = large(i, j);
    printf("The greater number is : %d", result);
    return 0;
}

int large(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}