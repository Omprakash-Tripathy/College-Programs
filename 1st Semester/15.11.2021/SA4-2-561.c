#include <stdio.h>

int main()
{
    int start, end;
    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);

    while (start < end + 1)
    {
        printf("%d\n", start);
        start += 1;
    }

    return 0;
}