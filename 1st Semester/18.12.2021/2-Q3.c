#include <stdio.h>
void SUM(int n)
{
    int r = 0;
    for (int i = n; i != 0; i = i / 10)
    {
        r = r + i % 10;
    }
    printf("The sum of the digits of %d is %d", n, r);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    SUM(n);
    return 0;
}