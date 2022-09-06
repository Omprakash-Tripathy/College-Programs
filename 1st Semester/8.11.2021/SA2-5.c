#include <stdio.h>
int main()
{
    int x, y, swap;
    printf("\nEnter a and b : ");
    scanf("%d%d", &x, &y);
    swap = x;
    x = y;
    y = swap;
    printf("\nSwapped value of a=%d and b=%d", x, y);
    return 0;
}