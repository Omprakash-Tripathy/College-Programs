#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Enter Num1 :");
    scanf("%d",&num1);
    printf("Enter Num2 :");
    scanf("%d",&num2);

    if (num1>num2)
        printf("Num1 is greater i.e. %d\n", num1);
    else if (num1 == num2)  
        printf("Both Num1 and Num2 are equal\n");    
    else
        printf("Num2 is greater i.e. %d \n", num2);    

    return 0;
}