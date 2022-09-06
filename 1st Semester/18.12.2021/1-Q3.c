#include <stdio.h>

int SUM(int n)
{
    int r = 0;
    for (int i = n; i != 0; i = i / 10)
    {
        r = r + i % 10;
    }
    return r;
}
int main()
{
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum = SUM(n);
    printf("The sum of the digits of %d is %d", n, sum);
    return 0;
}