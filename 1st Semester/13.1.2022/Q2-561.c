//2.	Write a program in C to print all the alphabets using a pointer.

#include<stdio.h>

int main()
{
    char c = 'a';
    char *ch;
    ch = &c;

    for (int i = 0; i < 26; i++)
        printf("%c ", *ch+i ); 

    return 0;
}