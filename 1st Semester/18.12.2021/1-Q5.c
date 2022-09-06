#include <stdio.h>
int REV(int n)
{
    int r, rev = 0;
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    return rev;
}
int main()
{
    int n, rev;
    printf("Enter an integer : ");
    scanf("%d", &n);
    rev = REV(n);
    printf("The reverse of %d is %d", n, rev);
    return 0;
}