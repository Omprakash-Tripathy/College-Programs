#include <stdio.h>
int main()
{
    int paisa, remainder, rupees;
    printf("\nEnter paisa = ");
    scanf("%d", &paisa);
    rupees = (paisa / 100);
    remainder = (paisa % 100);
    printf("\n%d paisa = %d Rupee and %d paisa", paisa, rupees, remainder);
    return 0;
}