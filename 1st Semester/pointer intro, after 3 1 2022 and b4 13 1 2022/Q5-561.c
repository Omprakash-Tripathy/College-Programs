//Q5) Write a program in C to find the factorial of a given number using pointers.

#include<stdio.h>
 
int main(int argc, char const *argv[])
{
    int num, *ptr, fact = 1;
    ptr = &fact;
 
    printf("Enter the number: ");
    scanf("%d", &num);
 
    for (int i = 1; i <= num; i++)
        *ptr *= i;
 
    printf("The factorial of %d is %d", num, fact);
     
    return 0;
}