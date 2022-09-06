#include <stdio.h>
#include<math.h>

int main()
{
    float a, b, c, real, imag, dis, i1, i2, r1, r2;
    printf("\nInput values for a, b and c=>");
    scanf("%f%f%f", &a, &b, &c);
    dis = b * b - 4 * a * c;
    if (dis == 0)
    {
        printf("\nThe Roots are Equal");
        r1 = r2 = -b / (2.0 * a);
        printf("\nRoots are %.2f and %.2f", r1, r2);
    }
    else if (dis > 0)
    {
        printf("\nThe Roots are real & unequal.");
        r1 = (-b + sqrt(dis)) / (2.0 * a);
        r2 = (-b - sqrt(dis)) / (2.0 * a);
        printf("\nRoots are %.2f and %.2f", r1, r2);
    }
    else
    {
        printf("\nThe Roots are inaginary");
        real = -1 / (2.0 * a);
        dis = -dis;
        imag = sqrt(dis) / (2.0 * a);
        printf("\nRoot1=%5.2f+i%5.2f", real, imag);
        printf("\nRoot2=%5.2f-i%5.2f", real, imag);
    }
    return 0;
}