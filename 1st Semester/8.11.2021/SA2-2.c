#include <stdio.h>
int main()
{
    float f, c;
    printf("\nEnter a temperature in Fahrenheit scale => ");
    scanf("%f", &f);
    c = (f - 32.0) / 1.8;
    printf("\nThe equivalent temperature in centigrade scale is %f", c);
    return 0;
}