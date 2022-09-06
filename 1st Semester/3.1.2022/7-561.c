#include <stdio.h>
int count;
int lcm(int n1, int n2)
{
    if (count % n1 == 0 && count % n2 == 0)
    {
        return count;
    }
    else
    {
        count++;
        lcm(n1, n2);
    }
}
int main()
{
    int n1, n2, l;
    printf("Enter two numbers : ");
    scanf("%d %d", &n1, &n2);
    count = n1;
    l = lcm(n1, n2);
    printf("LCM of %d and %d is %d", n1, n2, l);
    return 0;
}