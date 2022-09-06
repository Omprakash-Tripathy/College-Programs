#include <stdio.h>
int main()
{
    long sec, sec2, hour, min, t;
    printf("\nEnter time in seconds: ");
    scanf("%ld", &sec);
    hour = sec / 3600;
    t = sec % 3600;
    min = t / 60;
    sec2 = t % 60;
    printf("\n\n %ld second= %ld Hour %ld Minute and %ld Second", sec, hour, min, sec2);
    return 0;
}