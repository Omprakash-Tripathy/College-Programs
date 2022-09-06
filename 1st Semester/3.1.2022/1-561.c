#include <stdio.h>

int count = 1;

void count_50()
{
    if (count < 51)
    {
        printf("%d\n", count);
        count++;
        count_50();
    }
    else
        return;
}

int main()
{
    count_50();
    return 0;
}
