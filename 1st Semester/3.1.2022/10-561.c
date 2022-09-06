#include <stdio.h>
int count = 0, r, a = 0;
int rev(int n)
{
    if (n > 0)
    {
        r = n % 10;
        a = a * 10 + r;
        n = n / 10;
        rev(n);
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
    int s = rev(n);
    if (s == n)
    {
        printf("The given number is a palindrome");
    }
    else
    {
        printf("The given number is not a palindrome");
    }
    return 0;
}