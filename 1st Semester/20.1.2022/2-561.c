//Q2)WAP to store n student’s information (i.e. student’s roll no, name, gender, marks etc) of an educational institute and display all the data, using array of structure.

#include <stdio.h>

struct student
{
    int roll_no;
    char name[50];
    char gender61;
    int marks;
};

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student arr[n];
    struct student temp;

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d\n", i + 1);
        printf("Enter roll no: ");
        scanf("%d", &arr[i].roll_no);

        printf("Enter name: ");
        gets(arr[i].name);
        gets(arr[i].name);

        printf("Enter gender: ");
        scanf("%c", &arr[i].gender61);

        printf("Enter marks: ");
        scanf("%d", &arr[i].marks);
    }

    printf("\nStdents in roll num order: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll Number : %d\n", arr[i].roll_no);
        printf("Name : %s\n", arr[i].name);
        printf("gender : %c\n", arr[i].gender61);
        printf("Marks : %d\n\n", arr[i].marks);
    }

    return 0;
}