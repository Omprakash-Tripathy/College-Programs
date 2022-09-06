#include <stdio.h>
int main()
{
    float f, c;
    printf("\nEnter a temperature in centigrade scale => ");
    scanf("%f", &c);
    f = (c * 1.8) + 32;
    printf("\nThe equivalent temperature in fahrenheit scale is %f", f);
    return 0;
}