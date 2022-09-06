#include <stdio.h>

int main()
{
    float radius, perimeter;
    printf("\nEnter the radius of a circle : ");
    scanf("%f", &radius);
    perimeter = 2 * 3.14 * radius;
    printf("\nPerimeter of Circle : %f", perimeter);
    return 0;
}