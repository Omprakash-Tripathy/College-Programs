#include <stdio.h>
int main()
{
    char a[33], c[33];
    gets(a);
    int l;
    for (int i = 0; i < 33; i++)
    {
        if (a[i] == '\0')
            l = i;
        break;
    }
    for (int i = 0; i < a; i++)
        c[i] = a[i];

    printf("enter:");
    for (int i = 0; i < a; i++)
        puts(c);
}