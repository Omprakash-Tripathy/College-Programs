#include<stdio.h>

int main()
{
    char c;
    printf("Enter a character :");
    scanf("%c",&c);

    if (c>='A' && c<='Z')
    {
        printf("The lowercase letter is %c",c+32);
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}