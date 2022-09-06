#include <stdio.h>
void REV(int n)
{
    int num, r, rev = 0;
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
    int n;
    printf("Enter an integer : ");
    scanf("%d", &n);
    REV(n);
    return 0;
}