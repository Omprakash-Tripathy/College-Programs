#include <stdio.h>
int HCF()
{
    int num1, num2, hcf;
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
    return hcf;
}
int main()
{
    int hcf;
    hcf = HCF();
    printf("The HCF of the given numbers is %d", hcf);
    return 0;
}