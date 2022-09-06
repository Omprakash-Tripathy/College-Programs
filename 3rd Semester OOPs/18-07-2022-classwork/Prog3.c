#include <stdio.h>

struct employee
{
    char name[30];
    int id;
    int salary_61;
};

int main()
{
    int n ,netSalary;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
   struct employee p[n];
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        printf("Name: ");
        scanf("%s",p[i].name);

        printf("Id: ");
        scanf("%d",&p[i].id);

        printf("salary: ");
        scanf("%d",&p[i].salary_61);
        p[i].salary_61 = p[i].salary_61 + (80*p[i].salary_61)/100 + (10*p[i].salary_61)/100;
    }

    printf("************** All Employees Details **************\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",p[i].name);
 
        printf("Id \t: ");
        printf("%d \n",p[i].id);
 
        printf("Gross salary \t: ");
        printf("%d \n",p[i].salary_61);
 
        printf("\n");
    }
    return 0;
}