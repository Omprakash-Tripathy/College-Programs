#include <stdio.h>
void SUM()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int r = 0;
    for (int i = n; i != 0; i = i / 10)
    {
        r = r + i % 10;
    }
    printf("The sum of the digits of %d is %d", n, r);
}
int main()
{
    SUM();
    return 0;
}