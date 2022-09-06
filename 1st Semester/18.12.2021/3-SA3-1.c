#include <stdio.h>

int large();

int main()
{ 
    int result;
    result = large();
    printf("The greater number is : %d", result);
    return 0;
}

int large()
{
    int i, j;
    printf("Enter 2 numbers that you want to compare : ");
    scanf("%d%d", &i, &j);

    if (i > j)
    {
        return i;
    }
    else
    {
        return j;
    }
}