#include <stdio.h>
int main()
{
    char ch;
    printf("\n Enter an alphabet : ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        {
            printf("\nThe entered character %c is a vowel", ch);
        }
        else
        {
            printf("\nThe entered character %c is a consonant", ch);
        }
    }
    else
    {
        printf("\nThe entered character %c is not an alphabet", ch);
    }
    return 0;
}