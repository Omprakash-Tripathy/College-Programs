//Q1 WAP to store one student’s information (i.e. student’s roll no, name, gender, marks etc) of an educational institute and display all the data, using structure.

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
    struct student st;
    printf("Enter the roll no: ");
    scanf("%d", &st.roll_no);
    
    printf("Enter the name: ");
    gets(st.name);
    gets(st.name);
    
    printf("Enter the gender: ");
    scanf("%c", &st.gender61);

    printf("Enter the marks: ");
    scanf("%d", &st.marks);

    printf("The student details are: \n");
    
    printf("Roll no : %d\n", st.roll_no);
    
    printf("Name: %s\n", st.name);
    
    printf("gender : %c\n", st.gender61);
    
    printf("Marks : %d\n", st.marks);

    return 0;
}