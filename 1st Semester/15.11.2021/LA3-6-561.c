#include<stdio.h>
int main()
{
int grade,point;
printf("Enter Mark :");
scanf("%d",&grade);
point = grade;
switch (point)
{
case 100:
case 99:
case 98:
case 97:
case 96:
case 95:
printf("Grade is O");
break;
case 8:
printf("Grade is E");
break;
case 7:
printf("Grade is A");
break;
case 6:
printf("Grade is E");
break;
case 5:
printf("Grade is C");
break;
case 4:
printf("Grade is D");
break;
default:
printf("FAIL");}
printf("\n");
return 0;
}