/*Q4) WAP to store n students information (i.e. students roll no, name, gender, marks in 5 subjects etc) of
an educational institute and display all the data with total marks of each student, using an array of
structure. If full mark of each subject is considered as 100 and pass mark as 40, then display the list of
students failed in a particular subject.*/

#include <stdio.h>

struct student
{
    int roll_no;
    char name[50];
    char gender;
    int mark[5];
};
int main()
{
    int n, tmp;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct student arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d\n", i + 1);
        printf("Enter roll no: ");
        scanf("%d", &arr[i].roll_no);
        printf("Enter name: ");
        gets(arr[i].name);
        gets(arr[i].name);
        printf("Enter gender: ");
        scanf("%c", &arr[i].gender);
        for (int j = 0; j < 5; j++)
        {
            printf("Enter marks of subject %d: ", j + 1);
            scanf("%d", &arr[i].mark[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("Roll no: %d\n", arr[i].roll_no);
        printf("Name: %s\n", arr[i].name);
        printf("Gender: %c\n", arr[i].gender);
        for (int j = 0; j < 5; j++)
            printf("Marks of subject %d: %d\n", i + 1, arr[i].mark[j]);
        printf("\n");
    }
    printf("Enter number of subject you want to view: ");
    scanf("%d", &tmp);
    printf("Students failed in subject %d :\n", tmp);
    for (int i = 0; i < n; i++)
    {
        if (arr[i].mark[tmp - 1] < 40)
            printf("%s\t", arr[i].name);
    }
    return 0;
}