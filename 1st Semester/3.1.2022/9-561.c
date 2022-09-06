#include <stdio.h>
int count = 0, r, a = 0;
int sum(int n)
{
    if (n > 0)
    {
        r = n % 10;
        if (r % 2 == 0)
        {
            a = a + r;
        }
        n = n / 10;
        sum(n);
    }
    else
    {
        return a;
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int s = sum(n);
    printf("The sum of even digits of %d is %d", n, s);
    return 0;
}