#include <stdio.h>
int main()
{
    int m, rem, km;
    printf("\nEnter meters(m) = ");
    scanf("%d", &m);
    km = (m / 1000);
    rem = (m % 1000);
    printf("\n%d paisa = %d Km and %d meter", m, km, rem);
    return 0;
}