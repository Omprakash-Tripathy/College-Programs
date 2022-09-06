#include <stdio.h>
int main()
{
    float b, h, a;
    printf("\nEnter the values of base(b) and height(h) : ");
    scanf("%f %f", &b, &h);
    a = 0.5 * b * h;
    printf("\nArea(a) of the Triangle =%f", a);
    return 0;
}