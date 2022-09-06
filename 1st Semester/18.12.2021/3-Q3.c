#include <stdio.h>
int SUM()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int r = 0;
    for (int i = n; i != 0; i = i / 10)
    {
        r = r + i % 10;
    }
    return r;
}
int main()
{
    int sum;
    sum = SUM();
    printf("The sum of the digits of the given number is %d", sum);
    return 0;
}