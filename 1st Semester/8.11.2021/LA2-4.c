#include <stdio.h>
#include <math.h>

int main()
{
    float s1, s2, s3;
    printf("Enter length of 1st side: ");
    scanf("%f", &s1);
    printf("Enter length of 2nd side: ");
    scanf("%f", &s2);
    printf("Enter length of 3rd side: ");
    scanf("%f", &s3);

    float s = 0.5 * (s1 + s2 + s3);
    float ar = sqrt(s * (s - s1)*(s - s2)*(s - s3));
    printf("The area of the triangle is %f \n", ar);

    return 0;
}