#include <stdio.h>
int REV()
{
    int n, r, rev = 0;
    printf("Enter an integer : ");
    scanf("%d", &n);
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
    int rev;
    rev = REV();
    printf("The reverse of the given number is %d", rev);
    return 0;
}