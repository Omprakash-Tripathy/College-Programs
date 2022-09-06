#include <stdio.h>
void REV()
{
    int n, num, r, rev = 0;
    printf("Enter an integer : ");
    scanf("%d", &n);
    num = n;
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    printf("The reverse of %d is %d", num, rev);
}
int main()
{
    REV();
    return 0;
}