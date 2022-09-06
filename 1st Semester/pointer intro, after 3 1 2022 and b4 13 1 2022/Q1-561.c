//Q1) WAP to create, initialize, assign and access a pointer variable.

#include<stdio.h>
 
int main()
{
    int num, *numptr;
    numptr = &num;
   
    printf("Enter num: ");
    scanf("%d", &num);
 
    printf("The value of num is %d", *numptr);
    return 0;
}