#include <stdio.h>
void HCF()
{
    int hcf, num1, num2;
    printf("Enter num1 : ");
    scanf("%d", &num1);
    printf("Enter num2 : ");
    scanf("%d", &num2);
    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    printf("The HCF of %d and %d is %d", num1, num2, hcf);
}
int main()
{
    HCF();
    return 0;
}